char name[50];
int m1, m2, m3, total;
float average;

read(newsock, buffer, sizeof(buffer));

sscanf(buffer, "%s %d %d %d", name, &m1, &m2, &m3);

total = m1 + m2 + m3;
average = total / 3.0;

if (average >= 90)
    sprintf(buffer, "Name: %s\nTotal: %d\nAverage: %.2f\nGrade: A+",
            name, total, average);

else if (average >= 80)
    sprintf(buffer, "Name: %s\nTotal: %d\nAverage: %.2f\nGrade: A",
            name, total, average);

else if (average >= 70)
    sprintf(buffer, "Name: %s\nTotal: %d\nAverage: %.2f\nGrade: B",
            name, total, average);

else if (average >= 60)
    sprintf(buffer, "Name: %s\nTotal: %d\nAverage: %.2f\nGrade: C",
            name, total, average);

else
    sprintf(buffer, "Name: %s\nTotal: %d\nAverage: %.2f\nGrade: F",
            name, total, average);

write(newsock, buffer, strlen(buffer) + 1);