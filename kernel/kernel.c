void kernel_main() {
    char *video_memory = (char *) 0xb8000;

    const char *message = "Welcome to MiniOS";

    for (int i = 0; message[i] != '\0'; i++) {
        video_memory[i * 2] = message[i];
        video_memory[i * 2 + 1] = 0x0F;
    }

    while (1) {
    }
}