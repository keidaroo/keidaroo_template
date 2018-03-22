## バグの発生源について
------
### squarecontest B buildings are colorful
[https://s8pc-4.contest.atcoder.jp/submissions/1903918]
- 条件を変えた際、変えたところ以外のところも考慮しないといけない

### ARC D atcoder express
[https://twitter.com/keidaroo/status/944993129601540096]
- グラフで考える問題はグラフを書いて、配列の中身を理解しながら解けばいける（論理的に考える）

### ARC D Recording
[https://beta.atcoder.jp/contests/abc080/submissions/1908825]
- 0.5などの小数が出てきた問題は、2倍するなどしてとにかく「わかりやすく」する

### Box and Ball
[https://beta.atcoder.jp/contests/agc002/submissions/1911168]
- 初期化の順番を考える

### Simplified mahjong
[https://twitter.com/keidaroo/status/945532034620858368]
- コーナーケースを見つけたら、それを２つ組み合わせても自明にコーナーケース

### 高橋くんとカード
[https://twitter.com/keidaroo/status/946635776514695168]
- 次のdpに代入するときは=でなくて+=

### 駐車場
[https://beta.atcoder.jp/contests/arc056/submissions/1918975]
- 1個遷移した後が行けなくてもその次はいける可能性がある
- グローバル変数で変更したら戻す

### 花束
[https://twitter.com/keidaroo/status/946974194771693569]
- オーバーフローには気をつける

### 直線塗り
[https://twitter.com/keidaroo/status/948565996813524994]
- break文の書き忘れ
- 例外処理は一番最初のパートでかく

### 高橋くんと禁断の書
[https://twitter.com/keidaroo/status/949890535723974656]
- 三平方の定理みたいに二乗すると誤差がでやすい
- 三角関数を使う

### 音楽ゲーム
[https://twitter.com/keidaroo/status/951443548179644416]
- 入れる型を間違えた

### 謎のたこ焼きおじさん
[https://beta.atcoder.jp/contests/arc008/submissions/1984958]
- 割り算で切り上げを忘れた

### 超大型連休
[https://beta.atcoder.jp/contests/arc010/submissions/1984586]
- 早めに条件を代入しておく

### P-CASカードと高橋くん
[https://beta.atcoder.jp/contests/arc005/submissions/1987221]
- 場合分けは着実に

### SRM 721 DancingClass
- 確率の場合は愚直にやらないと余りとかの関係で別の答えが出てきてしまう。

## 考え方について
---
### マーブル
[https://twitter.com/keidaroo/status/944484153407389696]
- DPは、ありえない条件を作ったとしてもそれが最適解にならなければ作っていい

### 連結
[https://twitter.com/keidaroo/status/945291426346147840]
- 〇〇と同じか？という問題は何が同じなのかを考えて、aとbが同じならいい、という風にわかった場合はmapに入れて上げる！！

### Box and Ball
[https://beta.atcoder.jp/contests/agc002/submissions/1911168]
- ○○な可能性、と書いてあるときに、aという可能性とbという可能性があって、aという可能性は矛盾する、というときはaは無視してオッケー！
- 遷移の場合は、水を汲むことに置き換えてみる

### Simplified mahjong
[https://twitter.com/keidaroo/status/945532034620858368]
- 気づいたことはすぐに紙に書き、別の視点からみる。
- 区間に分けて考える。自明を分けて考える。

### 高橋くんゲーム
[https://twitter.com/keidaroo/status/946108123558821888]
- 性質を見つける（これ以上増やしても変わらない、とか）
- 普段値になる部分も配列の引数にできる

### 回分分割
[https://twitter.com/keidaroo/status/946641748582793216]
- 同じ文字が偶数個あれば必ず回文が作れる
- 文字が奇数個あればそれで一個回分になる

### 駐車場
[https://beta.atcoder.jp/contests/arc056/submissions/1918975]
- 幅優先探索で、フクロモモンガ風に

### 高橋ノルム君
[https://beta.atcoder.jp/contests/arc049/submissions/1930773]
- 4つの頂点をとる四角形が存在するかどうかは、右より左のほうが値が大きかったりすれば存在しない、という風に判断する

### 同一円周上
[https://twitter.com/keidaroo/status/947809147948384257]
- マンハッタン距離の45度回転方法は(x-y,x+y)
- 回転した後のmax(maxx-minx,maxy-miny)は正方形の一辺

### 最短路問題
[https://beta.atcoder.jp/contests/arc044/submissions/1935859]
- n(n-1)/2通り=n個の中から2つを選ぶ組み合わせ

### 難易度
[https://twitter.com/keidaroo/status/948538194999443459]
- imosDPの足し忘れに注意

### 高橋くんと禁断の書
[https://twitter.com/keidaroo/status/949890535723974656]
- 角度でもにぶたんができる
- ちょっと難しいと思ったら全探索を考えて、にぶたんできる（単調増加するところ）があるか調べる

### すぬけそだて　トレーニング
[https://beta.atcoder.jp/contests/colopl2018-qual/submissions/2018880]
- DPは遷移先を制限することを考える
- 何を引数としてとるか、っていうのをだんだん制限していく

### 誰じゃ
[https://beta.atcoder.jp/contests/arc024/submissions/2241581]
- mapにvectorをキーとして持たせることができる
- 常に最悪計算量について考えるべき

#JJMO
- 下二桁が〜とかそういう問題はmod 100をとってあげ、100-1==99だとかそういう性質を使って考える！
- 図形が解けなかったら図の描き方のミスを疑う！
- 解き直し
