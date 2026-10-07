char str[100], ch;
int i, count = 0;

read(newsock, buffer, sizeof(buffer));

sscanf(buffer, "%s %c", str, &ch);

for (i = 0; str[i] != '\0'; i++)
{
    if (str[i] == ch)
        count++;
}

sprintf(buffer, "Frequency of %c = %d", ch, count);

write(newsock, buffer, strlen(buffer) + 1);