﻿#include "cmaildlg.h"
#include "ui_cmaildlg.h"
#include "smtp.h"
#include <cstdlib>
#define RAND_MAX Ox7FFF

cmaildlg::cmaildlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmaildlg)
{
    ui->setupUi(this);
}

cmaildlg::~cmaildlg()
{
    delete ui;
}


void cmaildlg::on_buttonBox_accepted()
{//QByteArray
    int number = rand()%5;    //这个表达式会生成[0..max-1]之间的随机数

    QString mail = ui->lineEdit->text();
    Smtp smtp("a1211686411@163.com","OMCGKEFQESBEGNUP"); //邮箱和授权码都要用自己的

    switch (number) {
        case 0:
            smtp.send(mail.toUtf8(),"宝石迷阵","你获得了———— 蓝色钻石"
                                       "\n具有传奇性的钻石还有命名为“希望”的蓝色钻石"
                                       "\n它又叫“噩运之钻”、“大蓝钻”、“霍普钻石”，它是由历史上非常知名的一位宝石商人塔韦尼埃卖给法国国王路易十四的。"
                                       "\n大名鼎鼎的噩运之钻，蓝钻”希望“"
                                       "当时是塔韦尼埃第六次从印度采购宝石回来，他得到了非常多的珍贵宝石，发了大财。但是被人们认为由于厄运缠身而死在了印度，这颗“希望”也就开始了自己的噩运之旅。"
                                       "\n路易十四死于天花后，法国的继位者路易十五、路易十六都死在了法国大革命中，后来“希望”来到了银行家霍普的手中，结果霍普一家人死于海难。"
                                       "之后的主人有土耳其的商人，有美国的百万富翁，还有俄罗斯的王储等。但传奇的点就在于所有的主人都死于非命...."
                                       "\n人们后来对这颗好看到妖艳，厄运缠身的钻石十分好奇，它的最后一任主人，海瑞温斯顿先生（美国最好的钻石品牌海瑞温斯顿的创始人）得到它之后反而一生顺遂，寿终正寝，在离世前温斯顿把这颗传奇的钻石送给了美国的史密森博物院，一直保存至今。"
                                       "\n著名电影《泰坦尼克号》的女主角萝丝佩戴的“海洋之心”的原型就是这颗“希望”钻石啦");
            break;
        case 1:
            smtp.send(mail.toUtf8(),"宝石迷阵","你获得了———— 紫色宝石："
                                           "英国自然历史博物馆中收藏着一块罕见的“德里紫蓝宝石”，它与“希望蓝钻”、“光明之山”并称为世界三大传奇宝石。\n不过60多年以来，这块宝石一直被锁在博物馆的柜子中，秘不示人，直到2007年公共矿石馆开馆之际才得以重见天日。"
                                           "德里紫蓝宝石之所以声名在外，而且那么多年都被束之高阁，主要是因为其身负的“诅咒”传说，导致它的多任主人都灾难连连，甚至突遭横祸。\n"
                                           "最早关于德里紫蓝宝石的诅咒传说，可以追溯到16世纪巴布儿开创的印度莫卧儿王朝。前王朝的幸存者不断被追杀，后来他发现发现了这块宝石，为了复仇，他每天割破手指把血滴在宝石上诅咒，历时三年后将宝石送给了巴布儿。\n"
                                           "果然，老国王被儿子赶下宝座，新国王同样被儿子赶下宝座。同样，国王们也对这块给他们带来不幸的宝石分别施加了第二、第三重诅咒。\n"
                                           "后来德里紫蓝宝石被弃荒野200多年，直到1857年印度兵变期间，被士兵掠夺得到，并被一名叫W 菲里斯的骑兵上校带到了英国。\n"
                                           "但持有宝石的新主人菲里斯和他的儿子都没能躲过连串的厄运。不仅如此，就连曾经将这块宝石借回去把玩了几天的朋友，在不久之后也自杀身亡了。\n"
                                           "这块价值连城的宝石因此被传遭到了诅咒，成了灾祸的象征，任何拥有它的人都会噩运缠身。1890年，英国科学家爱德华 赫伦 艾伦成为了宝石的新主人。\n"
                                           "得到宝石后，爱德华也遭遇了一连串的倒霉事。甚至连曾经向他借宝石回家观赏的朋友们也不能幸免，其中一位歌手朋友在把玩宝石后突然“失声”，从此再也无法唱歌。\n"
                                           "爱德华曾试图用科学的方法去破解隐藏在宝石中的奥秘，但又忌惮遭遇厄运，于是干脆狠心将这块无价宝石扔进了伦敦运河里。可没想到3个月后，这块宝石又离奇地回到了他手中。\n"
                                           "原来一艘挖泥船从运河中捞到了这枚宝石，一名商人从船员那儿买下了它，并将它“物归原主”还给了爱德华。爱德华无奈，只得将宝石交给银行保管，至死不见。据称爱德华当时说：“我感到它会对我新生的女儿带来不利的影响。”\n"
                                           "直到去世前，爱德华将德里紫蓝宝石连同自己其他的收藏一并捐给了自然历史博物馆，并附上一封警告信：“宝石受到了诅咒，沾染了鲜血，拥有它的人都会失去财富荣誉。想要开启，必先读此警告再做决定，而我的建议是，立即将它扔进大海。”");
            break;
        case 2:
            smtp.send(mail.toUtf8(),"宝石迷阵","你获得了———— 黄色钻石："
                                           "这是一粒非常美丽的钻石，名叫“桑西”钻，重55克拉，传说这颗钻石曾镶在勇士卡尔头盔上，后在一次厮杀中丢失。\n"
                                           "1589年“桑西”钻出现在葡萄牙国王安东的珍宝库中。后以10万旧法郎卖给法兰西珍宝库总管领主德、桑西。\n"
                                           "“桑西”钻很长时间一直是他家族的传家之宝。后馈赠给法兰西王耿利赫二世，并列入法兰西国宝库清单中，1792年这颗钻石被洗劫走了。\n"
                                           "1830年“桑西”被一位乌克兰工厂主的后裔杰米多夫买走，成交价50万法郎，法国政府就此事打了一场官司，五年之后钻石判给了杰米多夫。\n"
                                           "410克拉的“摄政王”钻石也有一段动人的故事，传说是一个印度奴隶1701年在著名的戈尔康达矿的矿井里拾到的，他想凭这颗钻石改变人生获得自由，\n"
                                           "于是他趁人不注意举起丁字镐向大腿猛击，血流如注。这位印度人忍巨痛把钻石藏在伤口深处，并用树叶作绷带把伤口包好，\n"
                                           "他找到一个英国海轮水手，准备换取自由，海员看到巨钻之后，恨不能立即把它搞到手，为此准备豁出一切。水手和奴隶很快谈妥了，水手瞒着船长，\n"
                                           "把印度人藏在船舱里的黄麻里。18世纪90年代，它被拿破仑作为抵押担保发动远征的抵押物，1940年希特勒攻占巴黎时，钻石藏在沙姆博尔城大理石壁炉的护墙板中。\n"
                                           "目前这粒钻石陈列在卢浮宫中。");
            break;
        case 3:
            smtp.send(mail.toUtf8(),"宝石迷阵","你获得了———— 红色宝石："
                                           "话说很久以前，在如今昌化石产地玉岩山一带，连年蝗虫为患，瘟疫流行，百姓不得宁。"
                                           "一对精灵美丽的凤凰飞过玉岩山时，见此凄惨情景，决意要为此地百姓除害。\n"
                                           "经过奋力搏斗，消灭了蝗虫，驱散了瘟疫。百姓感恩万分，请求凤凰留下，凤凰被感动，便在玉岩山定居、成家。\n"
                                           "从此玉岩山下百姓康宁，田园丰收，山上百鸟齐鸣，万物生辉。\n "
                                           "可是不久，玉岩山来了一对强横的乌狮。它们忌妒凤凰的威信和名望，妄图侍机赶走凤凰，占山称霸。\n"
                                           "机会终于来了，正当雌凤凰进入孵育期，雄凤凰忙于外出觅食之际，乌狮偷袭凤巢，猛攻雌凤凰。\n"
                                           "雌凤凰势单力薄，被咬断了一条腿，鲜血流遍了玉岩山。雄凤凰归来，含着悲愤的眼泪，击退乌狮。\n"
                                           "为了医治创伤，它们只得埋好凤凰蛋，腾空远去。\n "
                                           "山下百姓痛惜万分，他们祈求天宫神灵保佑凤凰平安脱险。玉帝深受感动，视察了实情，令地藏王将玉岩山的凤凰血点化成美丽的丹石，并赋予丹石逢凶化吉、驱邪扬善的力量，那凤凰蛋也神奇地变成了晶莹瑰丽的玉石。\n"
                                           "而万恶的乌狮，见凤凰已经飞走，再次来到玉岩山，可万万没想到，当它们一踏上玉岩山，便被那遍地鲜红的丹石发出的道道金光烧成了乌炭。从此，玉岩山恢复昔日的和谐和欢乐。\n "
                                           "后来人民为了纪念传说中的那场惩恶扬善的争斗，把矿区几座奇特的山岩，冠上了鸡冠岩，老鹰岩、蚱蜢脚背等山名，还把鸡血石产地的山岭，取名为康山岭，以寄托永保康乐的愿望。\n"
                                           "后人又在玉岩山西端建起了两座寺院，分别供奉着玉皇大帝和地藏王神像，以示对神仙的感谢之恩\n");
            break;
        case 4:
            smtp.send(mail.toUtf8(),"宝石迷阵","你获得了————银色珍珠：旷世明珠——珍珠泪的爱情诅咒为何它千百年间不曾被遗忘？\n"
                                           "且听我细细道来......\n"
                                           "在珍珠首饰中，有一些非常著名的首饰。其中“珍珠泪”，相信很多人都有所耳闻。"
                                           "珍珠泪其实有第一代与第二代。第一代“珍珠泪”诞生在1825年。\n"
                                           "希腊王国国王奥托一世与德国贵族阿玛利亚结婚。他命人设计制作了一顶名为“珍珠泪”的王冠，赠送给然而没多久，国王奥托一世就得了重度精神病，生活都无法自理。可怜的希腊王后难以接受这个残酷的事实，终日以泪洗面。\n"
                                           "这顶饱含国王爱意的王冠也因为王后的忧郁而充满了悲情色彩。后来，这顶王冠由巴伐利亚王后特蕾莎所得，代代相传，最终传给了公主玛丽·加布里埃尔，但是凡是得到这个王冠的人，每个人的感情都历经劫难，让人唏嘘不已。1913年，伊丽莎白二世的祖母玛丽王后命人仿造祖母剑桥公爵夫人的王冠打造了第二款“珍珠类”。\n"
                                           "玛丽王后去世后，这顶“珍珠泪”随着其它遗产一起传给了她的孙女——伊丽莎白二世。据说，原来的王冠上一共有38颗珍珠。但为何现在的“珍珠泪”王冠的顶部是钻石而不是珍珠呢？\n"
                                           "有两种说法。\n"
                                           "其一是，玛丽王后用丈夫赠送的钻石代替原王冠顶部的珍珠；\n"
                                           "其二是，王冠是自由拆卸的款式，这样的设计使拥有者可以根据爱好随意更换宝石的种类。传到戴妃手上时，珍珠被转换成了钻石，拆下来的珍珠则被做成了相配的耳环、项链等。\n"
                                           "1981年7月29日，威尔士亲王查尔斯与黛安娜在白金汉宫举行了盛大的婚礼。婚礼当天，伦敦的街头上挤满了来自世界各地的人们，大家共同为这段现实版“灰姑娘”的故事送上了美好的祝福。典礼上，英国女王伊丽莎白二世将“珍珠泪”王冠赐予了威尔士王妃戴安娜。\n"
                                           "然而，婚后的查尔斯与黛安娜，并没有过上如童话般神仙眷侣的生活。而是充满了痛苦与泪水。最终戴安娜王妃更是香消玉殒。因为希腊王室的传说与戴安娜王妃的故事，使得“珍珠泪”爱情诅咒的传说越加扑朔迷离。\n"
                                           "因此，也就有了一些不详的说法——凡是拥有了珍珠泪的女性在感情上都会坎坷一生，得不到圆满的归宿。有人说，如果伊丽莎白二世没将“珍珠泪”赐予戴安娜，她与查尔斯的婚姻或许不会充满泪水和苦痛。也有人说，是“珍珠泪”让英伦玫瑰过早地香消玉殒。");
            break;
    }
//1596578260@qq.com


}
