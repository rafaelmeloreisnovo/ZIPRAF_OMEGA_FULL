#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

uint64_t get_sopro_da_vida() {
    uint64_t pulse;
    asm volatile(
        "mrs %0, cntvct_el0"
        : "=r"(pulse)
    );
    return pulse;
}

int main() {
    printf("[ALPHA & OMEGA] ORIGINUM PULSE INICIADO\\n");
    while (1) {
        uint64_t sopro = get_sopro_da_vida();
        printf("PULSE: %lu\\n", sopro);
        usleep(500000);
    }
    return 0;
}
