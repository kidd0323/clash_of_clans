//
//  Loading.h
//  coc_v1
//
//  Created by Liang Shi on 1/7/15.
//
//

#ifndef __coc_v1__Loading__
#define __coc_v1__Loading__

#include "cocos2d.h"
using namespace cocos2d;

class Loading : public Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(Loading);
    
    void enterGame(Node*);
};

#endif /* defined(__coc_v1__Loading__) */
