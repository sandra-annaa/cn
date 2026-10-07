int i;
int vowels = 0, consonants = 0;
int digits = 0, spaces = 0;

read(newsock, buffer, sizeof(buffer));

for (i = 0; buffer[i] != '\0'; i++)
{
    if (buffer[i] == ' ')
        spaces++;

    else if (buffer[i] >= '0' && buffer[i] <= '9')
        digits++;

    else if (buffer[i] == 'a' || buffer[i] == 'e' ||
             buffer[i] == 'i' || buffer[i] == 'o' ||
             buffer[i] == 'u' ||
             buffer[i] == 'A' || buffer[i] == 'E' ||
             buffer[i] == 'I' || buffer[i] == 'O' ||
             buffer[i] == 'U')
        vowels++;

    else
        consonants++;
}

sprintf(buffer,
        "Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d",
        vowels, consonants, digits, spaces);

write(newsock, buffer, strlen(buffer) + 1);