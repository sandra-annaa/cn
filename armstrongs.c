int n, temp, digit, sum = 0;

read(newsock, buffer, sizeof(buffer));

sscanf(buffer, "%d", &n);

temp = n;

while (temp != 0)
{
    digit = temp % 10;
    sum += digit * digit * digit;
    temp /= 10;
}

if (sum == n)
    sprintf(buffer, "%d is Armstrong", n);
else
    sprintf(buffer, "%d is not Armstrong", n);

write(newsock, buffer, strlen(buffer) + 1);