#include "asly.h"
#include "ui_asly.h"//dokme ha adrezan pass mosavi bezary ye dokme ro neshon midan pash mishe fahmid kodoom ro zade
#include <QTime>
asly::asly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asly)
{
    ui->setupUi(this);
    ui->user->hide();
    ui->type->hide();
    ui->username_2->setText(name);
}

void asly::on_contact_clicked(QString id){int j=0; int iz;
       if(ui->serchtxt->text().toStdString()!=""){
           ui->serchtxt->clear();
           for(iz=user->getChats().size();iz!=0;iz--){

               if(user->getChats()[iz]->getID()==id.toStdString())
                   //user->addChat();
               show_messeg(user->getChats()[iz]->getMessages());   ui->user->setWindowIconText(QString::fromStdString(user->getChats()[iz]->getID()));
               break;
           }
       }

       else{
       for(iz=user->getChats().size();iz!=0;iz--){

           if(user->getChats()[iz]->getID()==id.toStdString()){
           show_messeg(user->getChats()[iz]->getMessages());
           break;
           }
       }
       }
    if(dynamic_cast<Chat*>(user->getChats()[iz])!=NULL){
    ui->type->show();
    ui->user->show();

    }
    if(dynamic_cast<Group*>(user->getChats()[iz])!=NULL){
    ui->type->show();
    ui->user->show();

    }
    if(dynamic_cast<Channel*>(user->getChats()[iz])!=NULL){
        Channel* temp=dynamic_cast<Channel*>(user->getChats()[iz]);
        if(temp->getAdmin()==name.toStdString())
    ui->type->show();
    ui->user->show();

    }
    std::vector<QPushButton* > contacts;
    //this->show_messeg(messeges);
    std::vector<QPushButton>::iterator it;
  //  for(it=contact.begin();it!=contact.end();it++){j++;
  //      if(it==sender())
  //   break;
   // }

}
void asly::showcontact(std::vector<absChat*>ser){ std::vector<QPushButton* > contacts;
     qDeleteAll(ui->contactgroup->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
     QVBoxLayout *Lay = new QVBoxLayout;
     ui->contactgroup->setLayout(Lay);
     QSpacerItem* horizSpacer = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
     Lay->addSpacerItem(horizSpacer);

     for (int j=0;j!=ser.size();j++){



    QHBoxLayout *Lay2 = new QHBoxLayout;
    QSpacerItem* horizSpacer2 = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QGroupBox* con=new QGroupBox;
    //con->clearMask();
    QPushButton* ax=new QPushButton;
    QPushButton* esm=new QPushButton;
    contacts.push_back(esm);
    ax->setMinimumSize(20,20);
     esm->setMinimumSize(280,20);
     con->setMinimumSize(100,40);
    ax->setStyleSheet("font: 900 11pt Segoe UI Black;"
                      "color: rgb(255, 255, 255);");
    esm->setStyleSheet("background-color: rgb(120, 255, 140);"
                       "Text:aqqa;");
    esm->setText(QString::fromStdString(ser[j]->getID()));
    esm->setFlat(false);
    ax->setFlat(false);
    ax->setDisabled(true);


    con->setLayout(Lay2);
    Lay2->addSpacerItem(horizSpacer2);
    Lay2->addWidget(esm);
    Lay2->addWidget(ax);
    connect(esm,SIGNAL(clicked()),this,SLOT(on_contact_clicked(esm->text())));
     }
     }

void asly::show_messeg(std::vector<Message* > messeges)
{
    int i=0;
    qDeleteAll(ui->safhechat->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
    for(i=0,i!=messeges.size();i++){
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
   messa->setText(QString::fromStdString(messeges[i]->src+"\n"+messeges[i]->body+"\n                        "+messeges[i]->date));
   messa->setMaximumSize(400,150);
   if(messeges[i]->src==name.toStdString()){
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


void asly::on_send_clicked()
{QTime* QTime=new  class QTime;
    int i=0;
    if(ui->textEdit!=NULL){
        QString mass=ui->textEdit-> toPlainText();
        ui->textEdit->clear();
        QString time=QString::number(QTime->hour())+":";QString::number(QTime->second());
        QString src=name;
        QString dsn=ui->username->text();
        Message* payam=new Message(mass.toStdString(),time.toStdString(),src.toStdString(),dsn.toStdString());
        while(true){
        if(contact[i]->getID()==ui->username->text().toStdString())
        contact[i]->addMessage(payam);
        break;
        }
        i++;
    }
}


void asly::on_serchtxt_textChanged(const QString &arg1)
{ if(ui->serchtxt->text().toStdString()=="")
    {
        showcontact(user->getChats());
        return;
    }
    std::string serch=ui->serchtxt->text().toStdString();
    std::vector<absChat*>ser;
     int it;
     for(it=user->getChats().size();it!=0;it--){

         if(user->getChats()[it]->getID()==serch)
             ser.push_back(user->getChats()[it]);
     }
     showcontact(ser);
}


void asly::on_doserch_clicked()
{
    QString id=ui->serchtxt->text();try{
    user->joinChannel<Channel>(id.toStdString());
    }
    catch(std::runtime_error &e){
        try{
         user->joinChannel<Group>(id.toStdString());
        }
        catch(std::runtime_error &e){
            try{
             Chat* cha=new Chat(id.toStdString());
                           user->sendMessage<Chat>("s",cha);
                           user->addChat(cha);
            }
            catch(std::runtime_error &e){ui->serchtxt->setText("dorostesh kon");}
        }
    }

}


void asly::on_chanel_clicked()
{
    std::string esm=ui->esmsh->text().toStdString();
    user->createChat<Channel>(esm);



}


void asly::on_gruop_clicked()
{
    std::string esm=ui->esmsh->text().toStdString();
    user->createChat<Group>(esm);
}

