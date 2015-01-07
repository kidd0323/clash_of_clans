//
//  DefaultMap.cpp
//  coc_v1
//
//  Created by Liang Shi on 1/7/15.
//
//

#include "DefaultMap.h"

Scene* DefaultMap::scene()
{
    Scene* scene = Scene::create();
    DefaultMap* layer = DefaultMap::create();
    scene->addChild(layer);
    
    return scene;
}

bool DefaultMap::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Sprite* bg1 = Sprite::create("bg1.png");
    bg1->setScaleX(visibleSize.width / bg1->getContentSize().width / 2);
    bg1->setScaleY(visibleSize.height / bg1->getContentSize().height);
    
    bg1->setPosition(Point(visibleSize.width*3 / 4, visibleSize.height / 2));
    this->addChild(bg1, 0);
    
    
    
    return true;
}