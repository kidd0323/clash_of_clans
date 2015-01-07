//
//  DefaultMap.h
//  coc_v1
//
//  Created by Liang Shi on 1/7/15.
//
//

#ifndef __coc_v1__DefaultMap__
#define __coc_v1__DefaultMap__

#include "cocos2d.h"
using namespace cocos2d;

USING_NS_CC;

class DefaultMap : public Layer
{
public:
    static Scene* scene();
    bool init();
    CREATE_FUNC(DefaultMap);
    
};

#endif /* defined(__coc_v1__DefaultMap__) */
