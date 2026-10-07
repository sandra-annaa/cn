int i;

read(newsock, buffer, sizeof(buffer));

for (i = 0; buffer[i] != '\0'; i++)
{
    if (buffer[i] >= 'a' && buffer[i] <= 'z')
        buffer[i] = buffer[i] - 32;
}

write(newsock, buffer, strlen(buffer) + 1);