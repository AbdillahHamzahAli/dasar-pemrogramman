#include<stdio.h>
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

#define SIZE 100

int canKill = 0;

/**
 * @param i - row index
 * @param j - column index
 * @param n - size of the map array
 * The function checks if the given (i, j) position is within bounds of the map array.
 * 
 * @param i - indeks baris
 * @param j - indeks kolom
 * @param n - ukuran array peta
 * Fungsi ini memeriksa apakah posisi (i, j) yang diberikan berada dalam batas array peta.
 */
int isValid(int i, int j, int n);

/**
 * @param map - 2D array representing the map
 * @param i - starting row index
 * @param j - starting column index
 * @param n - size of the map array
 * The function finds a path from the start to the exit in the map using recursion.
 * 
 * @param map - array 2D yang mewakili peta
 * @param i - indeks baris awal
 * @param j - indeks kolom awal
 * @param n - ukuran array peta
 * Fungsi ini menemukan jalur dari awal ke pintu keluar di peta menggunakan rekursi.
 */
void dfs(char map[SIZE][SIZE], int i, int j, int n);

/**
 * @param a - first integer
 * @param b - second integer
 * The function computes the greatest common divisor (GCD) of two integers a and b.
 * 
 * @param a - bilangan bulat pertama
 * @param b - bilangan bulat kedua
 * Fungsi ini menghitung pembagi bersama terbesar (GCD) dari dua bilangan bulat a dan b.
 */
int gcd(int a, int b);

/**
 * @param a - first integer
 * @param b - second integer
 * The function computes the least common multiple (LCM) of two integers a and b.
 * 
 * @param a - bilangan bulat pertama
 * @param b - bilangan bulat kedua
 * Fungsi ini menghitung kelipatan persekutuan terkecil (LCM) dari dua bilangan bulat a dan b.
 */
int lcm(int a, int b);

/**
 * @param n - integer to check
 * The function checks if a number n is prime. Returns 1 if prime, 0 otherwise.
 * 
 * @param n - bilangan bulat yang akan diperiksa
 * Fungsi ini memeriksa apakah suatu bilangan n adalah bilangan prima. Mengembalikan 1 jika prima, 0 jika tidak.
 */
int isPrime(int n);

/**
 * @param n - integer to check
 * The function checks if an integer n is a palindrome. Returns 1 if palindrome, 0 otherwise.
 * 
 * @param n - bilangan bulat yang akan diperiksa
 * Fungsi ini memeriksa apakah suatu bilangan bulat n adalah palindrom. Mengembalikan 1 jika palindrom, 0 jika tidak.
 */
int isPalindrome(int n);

/**
 * @param a - integer whose modular inverse is to be found
 * @param m - modulus
 * The function calculates the modular inverse of a with respect to modulus m.
 * 
 * @param a - bilangan bulat yang invers modularnya akan ditemukan
 * @param m - modulus
 * Fungsi ini menghitung invers modular dari a terhadap modulus m.
 */
int modInverse(int a, int m);

/**
 * @param x - base integer
 * @param y - exponent
 * @param p - modulus
 * The function calculates (x^y) % p efficiently using modular exponentiation.
 * 
 * @param x - bilangan bulat dasar
 * @param y - eksponen
 * @param p - modulus
 * Fungsi ini menghitung (x^y) % p secara efisien menggunakan eksponensiasi modular.
 */
int power(int x, int y, int p);

/**
 * @param arr - array of integers to search
 * @param l - starting index of the search range
 * @param r - ending index of the search range
 * @param x - target integer to search for
 * The function performs a binary search on arr for the target integer x.
 * 
 * @param arr - array bilangan bulat yang akan dicari
 * @param l - indeks awal rentang pencarian
 * @param r - indeks akhir rentang pencarian
 * @param x - bilangan bulat target yang akan dicari
 * Fungsi ini melakukan pencarian biner pada arr untuk bilangan bulat target x.
 */
int binarySearch(int arr[], int l, int r, int x);

/**
 * @param arr - array of integers to partition
 * @param low - starting index of the partition
 * @param high - ending index of the partition
 * The function partitions the array arr around a pivot and returns the pivot index.
 * 
 * @param arr - array bilangan bulat yang akan dipartisi
 * @param low - indeks awal partisi
 * @param high - indeks akhir partisi
 * Fungsi ini mempartisi array arr di sekitar pivot dan mengembalikan indeks pivot.
 */
int partition(int arr[], int low, int high);

/**
 * @param arr - array of integers to sort
 * @param low - starting index of the sort range
 * @param high - ending index of the sort range
 * The function implements the QuickSort algorithm to sort the array arr in place.
 * 
 * @param arr - array bilangan bulat yang akan diurutkan
 * @param low - indeks awal rentang pengurutan
 * @param high - indeks akhir rentang pengurutan
 * Fungsi ini mengimplementasikan algoritma QuickSort untuk mengurutkan array arr di tempat.
 */
void quickSort(int arr[], int low, int high);

/**
 * @param arr - array of integers to merge
 * @param l - starting index of the merge range
 * @param m - middle index of the merge range
 * @param r - ending index of the merge range
 * The function merges two sorted halves of the array arr from indices l to m and m+1 to r.
 * 
 * @param arr - array bilangan bulat yang akan digabung
 * @param l - indeks awal rentang penggabungan
 * @param m - indeks tengah rentang penggabungan
 * @param r - indeks akhir rentang penggabungan
 * Fungsi ini menggabungkan dua bagian array arr yang sudah diurutkan dari indeks l ke m dan m+1 ke r.
 */
void merge(int arr[], int l, int m, int r);

/**
 * @param arr - array of integers to sort
 * @param l - starting index of the sort range
 * @param r - ending index of the sort range
 * The function implements the MergeSort algorithm to sort the array arr in place.
 * 
 * @param arr - array bilangan bulat yang akan diurutkan
 * @param l - indeks awal rentang pengurutan
 * @param r - indeks akhir rentang pengurutan
 * Fungsi ini mengimplementasikan algoritma MergeSort untuk mengurutkan array arr di tempat.
 */
void mergeSort(int arr[], int l, int r);



int main(){
    char map[SIZE][SIZE];
    int n,i,j,a,v,b;
    scanf("%d", &n);
    /*
    * TODO: Loop array i from 0 to n and j from 0 to n
    * -------------------------------------
    * TODO: Loop array i dari 0 hingga n dan j dari 0 hingga n
    */ 
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            // TODO: Call function to read the input
            scanf(" %c", &map[i][j]);

    for(a = 0; a < n; a++){
        for(b = 0; b < n; b++){
            /* 
            * TODO: Implement the logic here, call dfs if the cell is Zombie
            * -------------------------------------
            * TODO: Implementasikan logika di sini, panggil dfs jika sel adalah Zombie
            */
            if(map[a][b] == 'V'){
                /* 
                * TODO: Call the dfs function here
                * -------------------------------------
                * TODO: Panggil fungsi dfs di sini
                */
                dfs(map,a,b,n);
                break;
            }
        }
        if(canKill)
            break;
    }

    // TODO: Print based on the problem statement
    // -------------------------------------
    // TODO: Cetak berdasarkan soal
    if(canKill)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

int isValid(int i, int j, int n){
    if (i >= 0 && i < n && j >= 0 && j < n) return 1;
    return 0;
}

void dfs(char map[SIZE][SIZE], int i, int j, int n){
    /*
    * Todo: Call the isValid function here
    * Because the base case is when the cell is out of the map or the cell is a wall (X)
    * So, need to check if the cell is valid or not
    * Clue for the base case: if the cell is out of the map (is not valid, call function isvalid here) or the cell is already marked wall (X), 
    * or the cell is already explored return
    * -------------------------------------
    * Todo: Panggil fungsi isValid di sini
    * Karena basecasenya adalah ketika sel keluar dari peta atau sel adalah tembok (X)
    * Jadi, perlu memeriksa apakah sel valid atau tidak
    * Petunjuk untuk basecase: jika sel keluar dari peta (tidak valid, panggil fungsi isvalid di sini) atau sel sudah ditandai tembok (X),
    * atau sel sudah dieksplorasi maka return
    */ 
    if(isValid(i, j, n) || map[i][j] == 'X' || canKill) return;
    if(map[i][j] == 'V'){
        canKill = 1;
        return;
    }
    map[i][j] = 'D';
    
    /*
    * Recursive call to the dfs function
    * -------------------------------------
    * Panggilan rekursif ke fungsi dfs
    */
    dfs(map, i+1, j, n);
    dfs(map, i-1, j, n);
    dfs(map, i, j+1, n);
    dfs(map, i, j-1, n);
}

int gcd(int a, int b){
    // TODO 
    return 0;
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int isPrime(int n){
    int i;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int isPalindrome(int n){
    int reversed = 0, original = n;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int modInverse(int a, int m){
    int x;
    a = a % m;
    for (x = 1; x < m; x++)
        if ((a * x) % m == 0)
            return x;
    return -1;
}

int power(int x, int y, int p){
    int res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int binarySearch(int arr[], int l, int r, int x){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int partition(int arr[], int low, int high){
    int j;
    int pivot = arr[high];
    int i = low - 1;
    for (j = low; j < high; j++)
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}