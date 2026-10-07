printf("Enter start and end: ");
scanf("%d %d", &start, &end);

sprintf(buffer, "%d %d", start, end);

send(sockfd, buffer, strlen(buffer) + 1, 0);

recv(sockfd, buffer, sizeof(buffer), 0);

printf("Prime numbers: %s\n", buffer);