# cool844ビルドガイド

## ◯同封されているもの

スイッチプレート　１枚<br>
PCB １枚<br>



## ◯別途に購入するもの（１）
M2スペーサー10mm 5個<br>
M2ネジ15mm 5本<br>
ウレタンケーブル25cm<br>
ダイオード　44本<br>
MXソケット　44個<br>
タクトスイッチ　1個<br>
キースイッチ　44個<br>
キーキャップ<br>
スタビライザー２U ３個<br>
pro micro １個<br>
スプリングピンヘッダ（マックエイトコンスルー）２個<br>
フルカラーシリアルLEDテープ　２枚<br>
※これらのものについては、[遊舎工房](https://shop.yushakobo.jp)、[TALP KEYBOARDs](https://talpkeyboard.stores.jp)、[KOCHI KEYBOARD](https://kochikeyboard.stores.jp)等国内で自作キーボードに関する部品等を取り扱っているお店で購入することができます。M2スペーサー10mmは、外径の小さいものが最適です[KOCHI KEYBOARD](https://kochikeyboard.stores.jp)で[取り扱っているもの](https://kochikeyboard.stores.jp/items/5f8aabbdd24eee436e27e967)を推奨します。
<br>

## ◯別途に購入するもの（２）
[マイクロUSB端子（オス）](https://akizukidenshi.com/catalog/g/gC-07666/)<br>
[USB タイプC基板](https://akizukidenshi.com/catalog/g/gK-15426/)<br>
※これらのものについては、[秋月電子通商](https://akizukidenshi.com/catalog/)で購入することができます。

## ◯別途に購入するもの（3）
ケース
※GH60系60％キーボードケースを使うことを前提になっています。国内では[遊舎工房](https://shop.yushakobo.jp)等で、海外では[Ali Expresse](https://best.aliexpress.com/)等で同じようなケースを材質ごとに、見つけることができます。cool844がケース全てに使えるか確認することは、個人の裁量を超えます。購入者の自己責任でお願いします。

## ◯ファームウェア
<br>　このキーボードはQMKというキーボード用のソフトウェアで動作するようにプログラミングしています。<br>
（令和３年３月２０日追記）[REMAP](https://remap-keys.app/configure)に対応しました。使い方は次の通りです。<br>
最初に、cool844にREMAP用のhexファイル「[cool844_via.hex](https://github.com/telzo2000/cool844)」とREMAP用のJsonファイル「[cool844_remap.json](https://github.com/telzo2000/cool844)」をダウンロードしてQMK Toolboxにて使用してください。QMK Toolboxは下記のリンク先にあります。<br>
　[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)

　QMK Toolboxの使い方は詳しく書きませんが、REMAP用のhexファイルをダウンロードして、「Local File」で選択してください。pro microをPCに接続し、リセットボタンを押して書き込みます。（リセットボタンをダブルクリックしないと書き込めないパターンのものもあります）<br>
　書き込み方法などは[サリチル酸さんの（初心者編）自作キーボードにファームウェアを書き込むの記事](https://salicylic-acid3.hatenablog.com/entry/qmk-configurator)がとても参考になります。
<br>
<br>

次に
REMAPのサイトへアクセスしてください。<br>

![](img/remap001.png)
画面中央の「＋KEYBOARD」をクリックしてください。<br>
<br>
![](img/remap002.png)
キーボードとパソコンが繋がっていれば、次のような表示でます。
![](img/remap003.png)
cool844を選び、「接続」をクリックしてください。<br>
（令和３年３月２１日加筆）[Yoichiro Tanaka@yoichiro](https://twitter.com/yoichiro)さんにご教授頂き、REMAPへの登録ができました。本当にありがとうございます。接続すると、そのまま編集画面に変わります。<br>

![](img/remap004.png)

<br>
その後、REMAPのサイトはJsonファイルを要求してきます。

![](img/remap005.png)
中央に、先ほどダウンロードしたREMAP用のJsonファイルをドラッグ＆ドロップ（またはアップロード）してください。<br>

![](img/remap006.png)
そうすると、REMAPのサイト上で、cool844のキーレイアウトを編集することができます。この下に書く、VIAやKEYBOARD FIRMWARE BUILDERより簡単にキーレイアウトの編集ができると思います。ご活用ください。<br>

（令和３年３月１５日追記）[オタヒーのサメ@otahinosame](https://twitter.com/otahinosame)さんが[VIA対応ファームウェア](https://github.com/telzo2000/cool844/tree/main/via%40otahinosame/cool844)をご提供くださいました。本当にありがとうございます。[VIA](https://github.com/the-via/releases/tags)でキーマップを修正したい方はぜひ、ご活用ください。VIAの使い方について詳細な解説は、[サリチル酸さんの「（初心者編）VIAを使ってキーマップを書き換えよう」](https://salicylic-acid3.hatenablog.com/entry/via-manual)と言う記事がお勧めです。
<br><br>
（令和３年３月１４日追記）qmk_firmware内にcool844の[ファームウェア](https://github.com/telzo2000/cool844/tree/main/qmk_firmware/keyboards/cool844)を用意しました。まだ、プルリク等はしていません。私自身がよくわかっていないので、今後の学習を兼ねてプルリクするつもりですが、自信がありません。
<br><br>
ここからは以前の記述です。ご自身の環境下でqmk_firmwarで作業できない人は、ここからの方法をおすすめします。また、最近出たREMAPへの対応も前向きに検討中です。<br>
　作者が非IT系であることから、自力でファームウェアを作成していません。[Keyboard Firmware builder](https://kbfirmware.com/)を利用して、hexファイルを作成しました。[QMK Configurator](https://config.qmk.fm/#/)にプルリクする等すれば、QMKConfiguratorを使用してキーレイアウトを変更できますが、作者には、その力がありません。有識者の方で出来る方がいらっしゃれば、よろしくお願いします。<br>
　（もし、出来ましたら、ご連絡いただけると、ビルドガイドに、そのことを記載したいと思います）<br>
ピンの情報は次の通りです。<br>
![](img/img03.png)
　ここでは、Keyboard Firmware Builderで作成した [デフォルトJsonファイル](https://github.com/telzo2000/cool844)と[デフォルトHexファイル](https://github.com/telzo2000/cool844)を下記のリンク先に置きます。ダウンロードして、QMK Toolboxにて使用してください。QMK Toolboxは下記のリンク先にあります。<br>
　[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
<br>
　[デフォルトhexファイル](https://github.com/telzo2000/cool844)
<br>
　[デフォルトJsonファイル](https://github.com/telzo2000/cool844)
　<br>
　QMK Toolboxの使い方は詳しく書きませんが、デフォルトhexファイルをダウンロードして、「Local File」で選択してください。pro microをPCに接続し、リセットボタンを押して書き込みます。（リセットボタンをダブルクリックしないと書き込めないパターンのものもあります）<br>
　書き込み方法などは[サリチル酸さんの（初心者編）自作キーボードにファームウェアを書き込むの記事](https://salicylic-acid3.hatenablog.com/entry/qmk-configurator)がとても参考になります。他にも有用な記事が多いので、一読することをお勧めします。<br>
　デフォルトキーマップは作者が実際に使用しているもので、ほぼ何不自由なく使えるように工夫しています。チートシートは次のとおりです。<br>
Layer=0<br>
![](img/img01.png)
<br>
Layer=1<br>
![](img/img06.png)
<br>
Layer=2<br>
![](img/img05.png)
<br>
Layer=3<br>
![](img/img04.png)
<br>
　キーレイアウトの変更をされる場合は、事前に、[デフォルトJsonファイル](https://github.com/telzo2000/cool844)をダウンロードしてから、[Keyboard Firmware builder](https://kbfirmware.com/)へアクセスしてください。「Upload」をクリックして、先ほどのデフォルトJsonファイルを選択してください。下の画面になりましたら、「KEYMAP」をクリックしてください。その画面でキーレイアウトの変更ができます。<br>
![](img/img02.png)
<br>
　（「WIRING」「PINS」は絶対に変更しないでください。ここを変更して作成したHexファイルでは正しくキーが入力されなくなります。）変更ができましたら、「SETTING」をクリックしてください。下の画面になりましたら、「Save Configuration」をクリックしてください。変更されたキーレイアウトのJsonファイルがダウンロードされます。次回以降、それを使うことで、変更履歴を意識しながら、最高のキーレイアウトへ到着できると思います。<br>
![](img/img07.png)
<br>
　続いて、「COMPILE」をクリックしてください。下の画面になりましたら、「Download .hex」をクリックしてください。変更されたキーレアウトのHexフィルがダウンロードされます。このHexファイルを前述のQMK Toolboxで使用してください。<br>
<img width="796" alt="kfbscreenshot3" src="https://user-images.githubusercontent.com/67196597/93778286-b01d6d80-fc60-11ea-9c7b-53224d08bf6d.png">
<br>
<br>

## ◯組み立て

### １　表裏面の確認
スイッチプレートとPCBは、表面の右上にcool 844と印字されています。特にPCBは、diode 、socketと印字されている面が裏面です。

### ２　ダイオードのハンダ付け
PCB 裏面にダイオードのハンダ付けをします。ダイオードの足を曲げて取り付けて、ハンダ付けをします。ダイオードの足は、下面から「diode」と印刷された部分の穴に差し込みます。上面に伸びたダイオードの足は切り離してください。ダイオードには極性があります。ダイオードの黒い帯がある側が「diode」の文字の後ろになるようにハンダ付けしてください。ハンダ付けに自信がない場合、フラックスを利用すると、上手にハンダ付けができます。その後、フラックスクリーナーで綺麗に拭き取ることをお勧めします。１箇所印字されていないミスが確認できています。それ以外のダイオードのハンダ付けを参考にして、ハンダ付けをしてください。

### ３　MXソケットのハンダ付け
PCB 裏面にMXソケットのハンダ付けをします。PCB 裏面の端子箇所に多めにフラックスを塗布して、予備ハンダをしてください。MXソケットをsocket と印字を隠すように置いて、ハンダゴテを当てて、予備ハンダを溶かしながら、ハンダ付けをしてください。

### ４　タクトスイッチの取り付け
PCB裏面にresetと書かれた箇所があります。そこにタクトスイッチをハンダ付けしてください。

### ５　pro microの取り付け<br>
　本製品ではコンスルー（スプリングピンヘッダ）を使用してのpro microの装着を推奨しています。コンスルー（スプリングピンヘッダ）の向きに気をつけて使用してください。画像を参考にして、pro microの向きに注意してください。<br>
pro microを装着したさ、pro microの基板がたくさん載っている側が下向きになります。cool836AのVer.C+（イエローバージョン）と同じ付け方になります。

### ６ ドーターボードの作成と取り付け
ドーターボードの作成は[こちら](https://github.com/telzo2000/Hello_keyboard/blob/main/dbforcool844/buildlog.md)になります。取り付け方は、次の画像（試作品）を参考にしてください。<br>
![](img/IMG_4257.jpg)
![](img/IMG_4255.jpg)
![](img/IMG_4256.jpg)

### ７　スタビライザーの取り付け
PCB表面３箇所に、２Uのスタビライザーを取り付けます。スタビライザーに事前に、ルブしておくことをお勧めします。

### ８　キースイッチの取り付け<br>
最初にキースイッチ５個をトッププレートの５箇所（四隅と一番手前）に差し込みます。一度に全部のキースイッチを取り付けて、その後にPCBにハンダ付けしたMXソケットに差し込むとうまくいかないことが予想されます。５箇所で一度PCBにハンダ付けしたMXソケットに差し込み、残りのキースイッチをトッププレート、PCBの順に差し込んでください。それぞれのキースイッチの足がきちんとMXソケットの基板の穴に差し込まれていることを確認してください。差し込むときに、足が曲がってしまうことがあります。その場合は、ボタンを押しても入力されません。一度キースイッチを外して、足の修正または新しいキースイッチに交換等対処してください。

### 9 フルカラーシリアルLEDテープの取り付け
PCB裏面に、テープの裏面の保護紙を剥がして貼り付けます。その後、それぞれの端子にハンダを山盛りにして導通させてください。
![](img/IMG_4258.jpg)
この後、ファームウェアを入れて、入力できるかテストをしてください。

### 10　ネジ、スペーサーの取り付け
スイッチプレート表面からネジを通して、スペーサーも通しておきます。５箇所全て、その状態にします。<br>
ケースにスイッチプレート等を差し込んで、ネジを締めます。締めたり、緩めたりを繰り返すうちに、ネジ山が上手に溝に入り込んで、締めることができます。プラスチック製ケースではスイッチプレートがケース壁面上部より１mm程度下がった位置で、ネジは締まりました。締めすぎて、ネジ山を壊さないよう、注意してください。
![](img/IMG_4259.jpg)

### 11　右奥箇所のねじ止め（ver.1.1）
ケース右奥箇所の固定のため、PCBの一部に作成されたプレートを切り離してください。<br>
![](img/IMG_0935.jpg)
このパーツをM2ネジ４mm２本、ワッシャー１枚、M2スペーサー８mmを組み合わせて、次のようにしてください。<br>
![](img/IMG_4441.jpg)
全体像としては、次の通りです。
![](img/IMG_4440.jpg)
この箇所（次の画像の赤丸部分）をスイッチプレートで固定するときは、M2ネジ４mmを使用してください。<br>
![](img/IMG_4439.jpg)




![](img/IMG_4299.jpg)
