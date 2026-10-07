int i, length;
char temp;

printf("Client: %s\n", buffer);

length = strlen(buffer);

for (i = 0; i < length / 2; i++) {
    temp = buffer[i];
    buffer[i] = buffer[length - i - 1];
    buffer[length - i - 1] = temp;
}

printf("Server: %s\n", buffer);

sendto(sockfd, buffer, strlen(buffer) + 1, 0,
       (struct sockaddr *)&client_addr, len);