int start, end, i, j, prime;
char result[1024] = "";

read(newsock, buffer, sizeof(buffer));

sscanf(buffer, "%d %d", &start, &end);

for (i = start; i <= end; i++)
{
    prime = 1;

    if (i < 2)
        prime = 0;

    for (j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
        sprintf(result + strlen(result), "%d ", i);
}

sprintf(buffer, "%s", result);

write(newsock, buffer, strlen(buffer) + 1);