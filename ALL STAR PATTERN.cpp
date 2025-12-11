//RIGHT HALF PYRAMID
for(int i=1; i<=5; i++) {
    for(int j=1; j<=i; j++) {
        printf("* ");
    }
    printf("\n");
}
//LEFT HALF PYRAMID
for(int i=1; i<=5; i++) {
    for(int j=1; j<=5-i; j++) printf("  ");
    for(int k=1; k<=i; k++) printf("* ");
    printf("\n");
}
//FULL PYRAMID
for(int i=1; i<=4; i++) {
    for(int j=1; j<=4-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) printf("* ");
    printf("\n");
}
//INVERTED RIGHT HALF
for(int i=5; i>=1; i--) {
    for(int j=1; j<=i; j++) printf("* ");
    printf("\n");
}
//Inverted Left Half Pyramid
for(int i=5; i>=1; i--) {
    for(int j=1; j<=5-i; j++) printf("  ");
    for(int k=1; k<=i; k++) printf("* ");
    printf("\n");
}
//RHOMBUS PATTERN
for(int i=1; i<=5; i++) {
    for(int j=1; j<=5-i; j++) printf(" ");
    for(int k=1; k<=5; k++) printf("* ");
    printf("\n");
}
//DIAMOND PATTERN
int n = 3;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) printf("* ");
    printf("\n");
}
for(int i=n-1; i>=1; i--) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) printf("* ");
    printf("\n");
}
//HOURGLASS PATTERN
int n = 4;
for(int i=n; i>=1; i--) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) printf("* ");
    printf("\n");
}
for(int i=2; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) printf("* ");
    printf("\n");
}
//HOLLOW SQUAFRE PATTERN
int size = 5;
for(int i=1; i<=size; i++) {
    for(int j=1; j<=size; j++) {
        if(i==1 || i==size || j==1 || j==size) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
//HOLLOW FULL PYRAMID
int n = 4;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1 || i==n) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
//HOLLOW INVERTED FULL PYRAMID
int n = 4;
for(int i=n; i>=1; i--) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1 || i==n) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
//HOLLOW DIAMOND PATTERN
int n = 3;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
for(int i=n-1; i>=1; i--) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1) printf("*");
        else printf("  ");
    }
    printf("\n");
}
//HOLLOW HOURGLASSS PATTERN
int n = 4;
for(int i=n; i>=1; i--) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1 || i==n) printf("* ");
        else printf("  ");
    }
    printf("\n");
}
for(int i=2; i<=n; i++) {
    for(int j=1; j<=n-i; j++) printf("  ");
    for(int k=1; k<=2*i-1; k++) {
        if(k==1 || k==2*i-1 || i==n) printf("*");
        else printf("  ");
    }
    printf("\n");
}

