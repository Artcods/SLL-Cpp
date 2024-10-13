## Fungsi-Fungsi Utama

Proyek **Singly Linked List (SLL)** ini menyediakan beberapa fungsi utama yang memungkinkan manipulasi dan pengelolaan linked list. Berikut adalah penjelasan singkat tentang masing-masing fungsi:

### 1. `Create_List`

```cpp
void Create_List(List &L);
```

- **Deskripsi**: 
  - Menginisialisasi sebuah linked list kosong.
- **Tujuan**: 
  - Menyiapkan list agar siap untuk menerima elemen-elemen baru dengan mengatur pointer `first` ke `NULL`.
- **Penggunaan**: 
  - Dipanggil sebelum melakukan operasi lain pada list untuk memastikan bahwa list dalam keadaan kosong.

### 2. `newElement`

```cpp
adr newElement(infotype x);
```

- **Deskripsi**: 
  - Membuat sebuah node baru dengan nilai tertentu.
- **Tujuan**: 
  - Mengalokasikan memori untuk sebuah elemen baru, mengatur nilai `info` dengan nilai yang diberikan (`x`), dan menginisialisasi pointer `next` ke `NULL`.
- **Penggunaan**: 
  - Digunakan saat ingin menambahkan elemen baru ke dalam list.

### 3. `Insert_first`

```cpp
void Insert_first(List &L, adr P);
```

- **Deskripsi**: 
  - Menyisipkan sebuah node di awal linked list.
- **Tujuan**: 
  - Memasukkan node baru (`P`) sebagai elemen pertama dalam list. Jika list kosong, node tersebut menjadi satu-satunya elemen. Jika tidak, node baru akan ditempatkan sebelum node yang sudah ada.
- **Penggunaan**: 
  - Digunakan saat ingin menambahkan elemen baru di posisi terdepan list.

### 4. `Show`

```cpp
void Show(List L);
```

- **Deskripsi**: 
  - Menampilkan semua elemen yang ada dalam linked list.
- **Tujuan**: 
  - Memungkinkan pengguna untuk melihat isi dari list dengan mencetak nilai `info` dari setiap node secara berurutan dari awal hingga akhir.
- **Penggunaan**: 
  - Dipanggil ketika ingin memvisualisasikan atau memverifikasi isi list.

### 5. `Delete_Last`

```cpp
adr Delete_Last(List &L);
```

- **Deskripsi**: 
  - Menghapus elemen terakhir dari linked list.
- **Tujuan**: 
  - Menghapus node yang berada di akhir list dan mengembalikan pointer ke node yang dihapus. Jika list kosong, fungsi ini akan mengembalikan `NULL` dan menampilkan pesan bahwa list kosong.
- **Penggunaan**: 
  - Digunakan saat ingin menghapus elemen terakhir dari list, misalnya saat melakukan operasi pengurangan ukuran list.

---

## Contoh Penggunaan Fungsi

Berikut adalah ilustrasi singkat bagaimana fungsi-fungsi di atas digunakan dalam program utama (`main.cpp`):

1. **Inisialisasi List**:
   - Memanggil `Create_List(L)` untuk menginisialisasi list kosong.

2. **Menambahkan Elemen**:
   - Menggunakan `newElement(x)` untuk membuat node baru dengan nilai tertentu.
   - Memasukkan node tersebut ke dalam list dengan `Insert_first(L, P)`.

3. **Menampilkan Isi List**:
   - Memanggil `Show(L)` untuk menampilkan semua elemen yang ada dalam list.

4. **Menghapus Elemen Terakhir**:
   - Menggunakan `Delete_Last(L)` untuk menghapus node terakhir dari list.

---

## Ringkasan Fungsi

| Fungsi         | Deskripsi Singkat                                   |
|----------------|-----------------------------------------------------|
| `Create_List`  | Menginisialisasi list kosong.                       |
| `newElement`   | Membuat node baru dengan nilai tertentu.            |
| `Insert_first` | Menyisipkan node di awal list.                      |
| `Show`         | Menampilkan semua elemen dalam list.                |
| `Delete_Last`  | Menghapus elemen terakhir dari list dan mengembalikannya. |

---

## Kesimpulan

Dengan memahami fungsi-fungsi utama yang tersedia dalam proyek **Singly Linked List (SLL)** ini, Anda dapat dengan mudah memanipulasi dan mengelola linked list sesuai kebutuhan. Fungsi-fungsi ini menyediakan dasar yang kuat untuk operasi dasar pada linked list, seperti penambahan, penghapusan, dan penelusuran elemen.

---
