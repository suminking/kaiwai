= ギポタル|技術同人誌ポータル

厳密にはイベントではないのですが、技術同人誌に関わるツールとしてここで説明したいと思います。

技術同人誌に関わる全ての情報が手に入るWebサービスとして構築中のギポタル|技術同人誌ポータルを現在構築中です。このコンセプトやギポタルでできることなどをご紹介します。

== ギポタルを作っている人
言い出しっぺは、おやかた@oyakata2438です。１０人近い協力者を得て、現在鋭意実装中。

フロントなんもわからんマンな私は実装にはあまり役に立っていませんが、一応プロマネとして、コアの意思決定はやっているつもりです。

ファシリテーターとしてのKANEさん、フロントエンドつよつよマンのもっとさん、えるきちさん、イラストとコーディングの実務をなべくらさん、
バックエンドはじめいろいろアドバイスくれる、おにぎりさん、にるふぃさん、ふーれむさん、FORTEさん・・・

みなさんの協力を得て、週１回のモブワークで進めています。

モブワークの実例としても奇跡的なプロジェクトですね。

== ギポタルでできること

技術同人誌に関係する全ての情報が手に入ります。

具体的には、本の概要、頒布場所へリンク（例えば技術書典などのイベントのサークルページ、BOOTHやとらのあななどのECサイト、Amazonなど）、発行サークルのLP(Landing Page）の機能もあります。また、テーマについてのタグによるジャンル横断検索により、そのジャンルに属する本を一覧で探すこともできるという機能があります。

いくつか、作成中のデザイン、ページを貼り付けますが、それぞれのページの役割についてわかっていただけるのではないでしょうか


=== サークルのLanding Page
サークル主の皆さん、自分のサークルのWebサイトってお持ちですか？Blogがある？Twitterがメイン？

でも、それだと、本の一覧がないですよね。自作は自由だけどメンテナンス大変ですよね。

ということで、LPとして固定のURLを持ったページが欲しいと思いませんか？

実装イメージはこちらです。

//image[chap-event-gipotal/circlePage]["サークルページイメージ"]

=== 頒布サイトへのリンク
では、興味がある本があったとして、どうやって探しますか？Twitterで著者のIDを探して、そこからBOOTHのIDを探し出して、購入ページに行く。あるいは、サークルチェックしてイベントに買いに行く。なかなか大変ですね。

本の紹介ページから２クリックくらいで購入画面までいきたいですよね。という（個人的なものも含む）要望から、本の紹介ページから２クリックで頒布・決済にジャンプできるようにしています。本の詳細ページにそれぞれの頒布サイトの当該ページに直接リンクができます。

=== ジャンル・タグページ
興味のあるジャンルの本があったとして、それの隣のサークル、類似する本も探したくありませんか？探したいですよね

そこで、ジャンルごとのページです。本にタグ付けし、そのタグを持つ本を一覧表示します。

//image[chap-event-gipotal/topicsPage]["ジャンルごとのページイメージ"]

そして、上におすすめタグとして、関連するタグが表示されます。上位概念となるタグを持ってさらに広く検索することもできます。下位の概念を持つタグを辿ってさらに詳細に絞り込むことができます。関連、対立、競合するタグも含まれ、お隣を覗くこともできます。

近いジャンルの本全体に網をかけてチェックしたいという要望を叶えるものです。

=== 最後に
現在鋭意構築中のギポタルですが、もうすぐβリリースとして動作イメージをつかんでもらえるものをお見せできる予定です。また、正式リリースに至ったときには、ぜひ登録してみてください。サークル主のための機能を満載でお待ちしております。また機能追加の要望だけでなく、開発側としても参加をお待ちしております。