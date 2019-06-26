#include "topframe.h"
#include "ui_topframe.h"

TopFrame::TopFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::TopFrame)
{
    ui->setupUi(this);
    strpf = new StripFrameTriple(this);
    strpf->move(450,0);
}

TopFrame::~TopFrame()
{
    delete ui;
}