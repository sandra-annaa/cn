int n, i;
long long fact = 1;

sscanf(buffer, "%d", &n);

for (i = 1; i <= n; i++)
    fact = fact * i;

sprintf(buffer, "Factorial = %lld", fact);

printf("Server: %s\n", buffer);

sendto(sockfd, buffer, strlen(buffer) + 1, 0,
       (struct sockaddr *)&client_addr, len);