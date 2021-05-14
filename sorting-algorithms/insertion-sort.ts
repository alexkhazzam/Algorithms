const insertionSort = (a: Array<number>): Array<number> => {
  for (let i = 0; i < a.length; i++) {
    const c = a[i];

    while (c < a[i - 1]) {
      a[i] = a[i - 1];
      a[i - 1] = c;

      i--;
    }
  }

  return a;
};

console.log(insertionSort([5, 6, 2, 6, 4, 5, 1, 45, 2, 3, 25]));
// [1, 2, 2, 3, 4, 5, 5, 6, 6, 25, 45]
