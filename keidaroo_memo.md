## バグの発生源について
------
###squarecontest B buildings are colorful
[https://s8pc-4.contest.atcoder.jp/submissions/1903918]
- 条件を変えた際、変えたところ以外のところも考慮しないといけない

###ARC D atcoder express
[https://twitter.com/keidaroo/status/944993129601540096]
- グラフで考える問題はグラフを書いて、配列の中身を理解しながら解けばいける（論理的に考える）

###ARC D Recording
[https://beta.atcoder.jp/contests/abc080/submissions/1908825]
- 0.5などの小数が出てきた問題は、2倍するなどしてとにかく「わかりやすく」する

###Box and Ball
[https://beta.atcoder.jp/contests/agc002/submissions/1911168]
- 初期化の順番を考える

###Simplified mahjong
[https://twitter.com/keidaroo/status/945532034620858368]
- コーナーケースを見つけたら、それを２つ組み合わせても自明にコーナーケース

###高橋くんとカード
[https://twitter.com/keidaroo/status/946635776514695168]
- 次のdpに代入するときは=でなくて+=

###駐車場
[https://beta.atcoder.jp/contests/arc056/submissions/1918975]
- 1個遷移した後が行けなくてもその次はいける可能性がある
- グローバル変数で変更したら戻す

## 考え方について
---
###マーブル
[https://twitter.com/keidaroo/status/944484153407389696]
- DPは、ありえない条件を作ったとしてもそれが最適解にならなければ作っていい

###連結
[https://twitter.com/keidaroo/status/945291426346147840]
- 〇〇と同じか？という問題は何が同じなのかを考えて、aとbが同じならいい、という風にわかった場合はmapに入れて上げる！！

###Box and Ball
[https://beta.atcoder.jp/contests/agc002/submissions/1911168]
- ○○な可能性、と書いてあるときに、aという可能性とbという可能性があって、aという可能性は矛盾する、というときはaは無視してオッケー！
- 遷移の場合は、水を汲むことに置き換えてみる

###Simplified mahjong
[https://twitter.com/keidaroo/status/945532034620858368]
- 気づいたことはすぐに紙に書き、別の視点からみる。
- 区間に分けて考える。自明を分けて考える。

###高橋くんゲーム
[https://twitter.com/keidaroo/status/946108123558821888]
- 性質を見つける（これ以上増やしても変わらない、とか）
- 普段値になる部分も配列の引数にできる

###回分分割
[https://twitter.com/keidaroo/status/946641748582793216]
- 同じ文字が偶数個あれば必ず回文が作れる
- 文字が奇数個あればそれで一個回分になる

###駐車場
[https://beta.atcoder.jp/contests/arc056/submissions/1918975]
- 幅優先探索で、フクロモモンガ風に
