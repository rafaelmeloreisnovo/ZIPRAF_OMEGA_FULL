#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

uint64_t get_entropy() {
    uint64_t val;
    asm volatile(
        "mrs %0, cntvct_el0"
        : "=r"(val)
    );
    return val;
}

int main() {
    printf("[ALPHA & OMEGA] Verbo Vivo ARM64 iniciado\n");
    while (1) {
        uint64_t e = get_entropy();
        printf("Entropy: %lu\n", e);
        usleep(500000);
    }
    return 0;
}
