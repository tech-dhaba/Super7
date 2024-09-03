#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SNOWFLAKES 100

typedef struct {
    int x, y;
    int size;
    COLORREF color;
} Snowflake;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static Snowflake snowflakes[NUM_SNOWFLAKES];
    static HBRUSH hRedBrush;
    static HBRUSH hSnowBrush;
    static int width, height;
    static HDC hdcMem;
    static HBITMAP hbmMem;
    static BITMAP bm;

    switch (uMsg) {
        case WM_CREATE: {
            // Initialize snowflakes
            srand((unsigned int)time(NULL));
            for (int i = 0; i < NUM_SNOWFLAKES; i++) {
                snowflakes[i].x = rand() % 800;
                snowflakes[i].y = rand() % 600;
                snowflakes[i].size = rand() % 5 + 1;
                snowflakes[i].color = RGB(255, 255, 255); // Snowflakes color
            }
            // Red background brush
            hRedBrush = CreateSolidBrush(RGB(255, 0, 0));
            hdcMem = CreateCompatibleDC(GetDC(hwnd));
            hbmMem = CreateCompatibleBitmap(GetDC(hwnd), 800, 600);
            SelectObject(hdcMem, hbmMem);
            break;
        }
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            // Draw red background
            FillRect(hdc, &ps.rcPaint, hRedBrush);

            // Draw snowflakes
            for (int i = 0; i < NUM_SNOWFLAKES; i++) {
                HBRUSH hBrush = CreateSolidBrush(snowflakes[i].color);
                SelectObject(hdc, hBrush);
                Ellipse(hdc, snowflakes[i].x, snowflakes[i].y, snowflakes[i].x + snowflakes[i].size, snowflakes[i].y + snowflakes[i].size);
                DeleteObject(hBrush);
            }

            EndPaint(hwnd, &ps);
            break;
        }
        case WM_TIMER: {
            // Update snowflakes position
            for (int i = 0; i < NUM_SNOWFLAKES; i++) {
                snowflakes[i].y += 5;
                if (snowflakes[i].y > height) {
                    snowflakes[i].y = 0;
                    snowflakes[i].x = rand() % width;
                }
            }
            InvalidateRect(hwnd, NULL, TRUE);
            break;
        }
        case WM_SIZE: {
            width = LOWORD(lParam);
            height = HIWORD(lParam);
            break;
        }
        case WM_DESTROY:
            DeleteObject(hRedBrush);
            DeleteObject(hbmMem);
            DeleteDC(hdcMem);
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "SnowWindowClass";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "Snow on Red Background",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
    SetTimer(hwnd, 1, 50, NULL); // Timer for animation

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

