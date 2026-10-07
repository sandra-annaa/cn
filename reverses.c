int i, len;
char temp;

printf("Client: %s\n", buffer);

len = strlen(buffer);

for (i = 0; i < len / 2; i++) {
    temp = buffer[i];
    buffer[i] = buffer[len - i - 1];
    buffer[len - i - 1] = temp;
}

printf("Server: %s\n", buffer);

sendto(sockfd, buffer, strlen(buffer) + 1, 0,
       (struct sockaddr *)&client_addr, len);