printf("Enter string: ");
scanf(" %[^\n]", buffer);

send(sockfd, buffer, strlen(buffer) + 1, 0);

recv(sockfd, buffer, sizeof(buffer), 0);

printf("Server:\n%s\n", buffer);