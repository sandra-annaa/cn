int n, a = 0, b = 1, c, i;
char result[1024] = "";

sscanf(buffer, "%d", &n);

for (i = 0; i < n; i++) {
    sprintf(result + strlen(result), "%d ", a);

    c = a + b;
    a = b;
    b = c;
}

printf("Server: %s\n", result);

sendto(sockfd, result, strlen(result) + 1, 0,
       (struct sockaddr *)&client_addr, len);