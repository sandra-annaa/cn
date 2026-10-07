printf("Enter number: ");
scanf("%d", &n);

sprintf(buffer, "%d", n);

send(sockfd, buffer, strlen(buffer) + 1, 0);

recv(sockfd, buffer, sizeof(buffer), 0);

printf("Server: %s\n", buffer);