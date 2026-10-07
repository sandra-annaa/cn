int n;

printf("Enter number: ");
scanf("%d", &n);

sprintf(buffer, "%d", n);

sendto(sockfd, buffer, strlen(buffer) + 1, 0,
       (struct sockaddr *)&server_addr, sizeof(server_addr));

len = sizeof(server_addr);

recvfrom(sockfd, buffer, sizeof(buffer), 0,
         (struct sockaddr *)&server_addr, &len);

printf("Server: %s\n", buffer);