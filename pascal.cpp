
//パスカルの三角形

double prob[1010][1010];
void init_table() {
  prob[0][0] = 1.0;
  for (int i = 1; i <= 1000; ++i) {
    prob[i][0] = prob[i][i] = prob[i - 1][0]; //*0.5 確率
    for (int j = 1; j < i; ++j)
      prob[i][j] = (prob[i - 1][j - 1] + prob[i - 1][j]); //*0.5 確率
  }
}
