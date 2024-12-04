// Q1.
#include <stdio.h>

int main() {
    int marks[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
// Q2.
#include <stdio.h>

int main() {
    int marks[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        if (marks[i] >= 75)
            printf("A\n");
        else if (marks[i] >= 60)
            printf("B\n");
        else if (marks[i] >= 40)
            printf("C\n");
        else
            printf("D\n");
    }
    return 0;
}
// Q3.
#include <stdio.h>

int main() {
    int marks[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99 first.\n", i + 1);
            break;
        }
    }

    return 0;
}
// Q4.
#include <stdio.h>

int main() {
    int marks[5];
    int count = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99\n", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("No student scored 99\n");
    } else {
        printf("%d students scored 99\n", count);
    }

    return 0;
}
// Q5.
#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    printf("Total sum of scores: %d\n", sum);

    return 0;
}
// Q6.
#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float average;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    average = sum / 5.0;
    printf("Average score: %f\n", average);

    return 0;
}
// Q7.
#include <stdio.h>

int main() {
    int marks[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    for (int i = 0; i < 5; i++) {
        if (marks[i] % 2 == 0)
            printf("Student %d: %d (Even)\n", i + 1, marks[i]);
        else
            printf("Student %d: %d (Odd)\n", i + 1, marks[i]);
    }

    return 0;
}
// Q8.
#include <stdio.h>

int main() {
    int marks[5];
    int max, min;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    max = marks[0];
    min = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] > max)
            max = marks[i];
        if (marks[i] < min)
            min = marks[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
// Q9.
#include <stdio.h>

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 4; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            printf("Peak element is %d at index %d\n", arr[i], i);
            return 0;
        }
    }

    if (arr[0] >= arr[1]) {
        printf("Peak element is %d at index 0\n", arr[0]);
    } else {
        printf("Peak element is %d at index 4\n", arr[4]);
    }

    return 0;
}
// Q10.
#include <stdio.h>

int main() {
    int arr[5], count = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        int flag = 0;
        if (arr[i] < 2) 
        {
            continue;
        }
        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) count++;
    }

    printf("Prime numbers count: %d\n", count);

    return 0;
}
// Q11.
#include <stdio.h>

int main() {
    int arr[10], n, i, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position to insert : ", n+1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (pos == 1) {
        for (i = n; i >= 1; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value;
        n++;
    } else if (pos == n + 1) {
        arr[n] = value;
        n++;
    } else if (pos > 1 && pos <= n) {
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
    }

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// Q12.
#include <stdio.h>

int main() {
    int arr[10], n, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position to delete : ", n);
    scanf("%d", &pos);

    if (pos == 1) {
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else if (pos == n) {
        n--;
    } else if (pos > 1 && pos < n) {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// Q13.
#include <stdio.h>

int main() {
    int arr[5], temp, n = 5;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// Q14.
#include <stdio.h>

int main() {
    int arr[10], n, flag = 0;

    scanf("%d", &n);
    printf("Array size: %d\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}

