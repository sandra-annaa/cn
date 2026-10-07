printf("Enter string and character: ");
scanf(" %[^\n]", buffer);

send(sockfd, buffer, strlen(buffer) + 1, 0);

recv(sockfd, buffer, sizeof(buffer), 0);

printf("Server: %s\n", buffer);