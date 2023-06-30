#include "asly.h"
#include "ui_asly.h"//dokme ha adrezan pass mosavi bezary ye dokme ro neshon midan pash mishe fahmid kodoom ro zade

asly::asly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asly)
{
    ui->setupUi(this);
    ui->user->hide();
    ui->type->hide();
    ui->username_2->setText(name);
}

void asly::on_contact_clicked(){int j=0;
    ui->type->show();
    ui->user->show();
    std::vector<QPushButton > messeges;
    //this->show_messeg(messeges);
    std::vector<QPushButton>::iterator it;
  //  for(it=contact.begin();it!=contact.end();it++){j++;
  //      if(it==sender())
  //   break;
   // }
}
void asly::showcontact(){
    qDeleteAll(ui->contactgroup->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
    QVBoxLayout *Lay = new QVBoxLayout;
    QSpacerItem* horizSpacer = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QHBoxLayout *Lay2 = new QHBoxLayout;
    QSpacerItem* horizSpacer2 = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QGroupBox* con=new QGroupBox;
    //con->clearMask();
    QPushButton* ax=new QPushButton;
    QPushButton* esm=new QPushButton;
    ax->setMinimumSize(20,20);
     esm->setMinimumSize(280,20);
     con->setMinimumSize(100,40);
    ax->setStyleSheet("font: 900 11pt Segoe UI Black;"
                      "color: rgb(255, 255, 255);");
    esm->setStyleSheet("background-color: rgb(120, 255, 140);"
                       "Text:aqqa;");
    esm->setText("sdsxc");
    esm->setFlat(false);
    ax->setFlat(false);
    ax->setDisabled(true);

    ui->contactgroup->setLayout(Lay);
    Lay->addSpacerItem(horizSpacer);
    con->setLayout(Lay2);
    Lay2->addSpacerItem(horizSpacer2);
    Lay2->addWidget(esm);
    Lay2->addWidget(ax);
    connect(esm,SIGNAL(clicked()),this,SLOT(show_messeg()));

}
void asly::show_messeg(std::vector<Message > messeges)
{int i=0;
    qDeleteAll(ui->safhechat->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
 QHBoxLayout *Lay = new QHBoxLayout; QSpacerItem* horizSpacer = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
  ui->safhechat->setLayout(Lay);
  Lay->addSpacerItem(horizSpacer);
   QHBoxLayout *Lay2 = new QHBoxLayout;
   QSpacerItem* horizSpacer2 = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
   QGroupBox* mess=new QGroupBox;
   mess->setMaximumHeight(150);
   QTextEdit*messa=new QTextEdit;
   messa->setStyleSheet("border-radius:7px;"
                         "background-color: rgb(201, 209, 213);"
                         "TextMargins:2px;"
                         "padding-left:4px;"
                         "font: 900 9pt Segoe UI Black;");
   messa->setReadOnly(true);
   messa->setText(QString::fromStdString(messeges[i].body+"\n                        "+messeges[i].date));
   messa->setMaximumSize(400,150);
   if(messeges[i].src==name.toStdString()){
       mess->setLayout(Lay2);
       Lay2->addSpacerItem(horizSpacer2);
       Lay2->addWidget(messa);
   }
   else{
       mess->setLayout(Lay2);
     Lay2->addWidget(messa);
     Lay2->addSpacerItem(horizSpacer2);
   }

}
asly::~asly()
{
    delete ui;
}

void asly::on_pushButton_2_clicked()
{

}


void asly::on_safejadid_clicked()
{
    ui->setting->setMaximumSize(QSize(12342,12321));
}


void asly::on_pushButton_16_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
}


void asly::on_pushButton_14_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
    ui->userinformation->setMaximumSize(QSize(1234,1234));
}


void asly::on_pushButton_20_clicked()
{
    ui->setting->setMaximumSize(QSize(1234,1234));
    ui->userinformation->setMaximumSize(QSize(0,0));
    ui->userinformation->setMinimumSize(QSize(0,0));
}


void asly::on_doserch_clicked()
{
    ui->contactpage->setMaximumSize(0,0);
    ui->contactpage_2->setMaximumSize(1234,12345);

}


void asly::on_safejadid_2_clicked()
{
    ui->contactpage->setMaximumSize(1234,12345);
    ui->contactpage_2->setMaximumSize(0,0);
}


void asly::on_doserch_2_clicked()
{
    QString esmkhas=ui->serchtxt_2->text();
    //esmo darim ba esm khas donal contact mighardim
}

