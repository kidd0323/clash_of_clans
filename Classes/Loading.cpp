//
//  Loading.cpp
//  coc_v1
//
//  Created by Liang Shi on 1/7/15.
//
//

#include "Loading.h"
#include "DefaultMap.h"

USING_NS_CC;

Scene* Loading::createScene()
{
    Scene* scene = Scene::create();
    Loading* layer = Loading::create();
    scene->addChild(layer);
    
    return scene;
}

bool Loading::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Sprite* bgSprite = Sprite::create("Loading.png");
    bgSprite->setScaleX(visibleSize.width / bgSprite->getContentSize().width);
    bgSprite->setScaleY(visibleSize.height / bgSprite->getContentSize().height);
    
    bgSprite->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
    this->addChild(bgSprite, 0);
    
    DelayTime* delay = DelayTime::create(2);
    CallFuncN* enter = CallFuncN::create(this, callfuncN_selector(Loading::enterGame));
    this->runAction(Sequence::create(delay, enter, NULL));
    
    return true;
}

void Loading::enterGame(Node* )
{
    Director::getInstance()->replaceScene(TransitionFade::create(3.0f, DefaultMap::scene()));
}
