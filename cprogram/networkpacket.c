#include <stdio.h>
typedef struct {
    unsigned int source_port : 16;         
    unsigned int destination_port : 16;   
    unsigned int sequence_number : 32;    
    unsigned int ack_number : 32;         
    unsigned int flags : 8;              
} NetworkPacket;
void setNetworkPacket(NetworkPacket *packet, unsigned int source_port, unsigned int destination_port,
                      unsigned int sequence_number, unsigned int ack_number, unsigned int flags) {
    packet->source_port = source_port;
    packet->destination_port = destination_port;
    packet->sequence_number = sequence_number;
    packet->ack_number = ack_number;
    packet->flags = flags;
}
void printNetworkPacket(const NetworkPacket *packet) {
    printf("Source Port: %u\n", packet->source_port);
    printf("Destination Port: %u\n", packet->destination_port);
    printf("Sequence Number: %u\n", packet->sequence_number);
    printf("Acknowledgment Number: %u\n", packet->ack_number);
    printf("Flags: %u\n", packet->flags);
    for (int i = 0; i < 8; i++) {
        printf("Flag %d: %s\n", i, (packet->flags & (1 << i)) ? "Set" : "Not Set");
    }
}

int main() {
    NetworkPacket packet;
    setNetworkPacket(&packet, 12345, 80, 1234567890, 987654321, 0b10101010);
    printNetworkPacket(&packet);
    return 0;
}

