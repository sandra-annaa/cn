int n;

printf("Enter number of terms: ");
scanf("%d", &n);

sprintf(buffer, "%d", n);

sendto(sockfd, buffer, strlen(buffer) + 1, 0,
       (struct sockaddr *)&server_addr, sizeof(server_addr));

printf("Message sent to server\n");

len = sizeof(server_addr);

recvfrom(sockfd, buffer, sizeof(buffer), 0,
         (struct sockaddr *)&server_addr, &len);

printf("Server: %s\n", buffer);