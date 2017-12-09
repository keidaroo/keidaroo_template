ll f[305][305];
void floyd()
{
	for (int k = 0; k < n; ++k)//ここ、0か1かで注意！
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
				f[j][i] = f[i][j];
			}
		}
	}
	return;
}
//INFで初期化！
