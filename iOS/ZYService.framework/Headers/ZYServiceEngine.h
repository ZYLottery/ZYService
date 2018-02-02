//
//  ZYServiceEngine.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYMobileService.h"
#import "ZYQueryService.h"


@interface ZYServiceEngine : NSObject

/**
 *  mobile api 服务
 */
@property(nonatomic,strong) ZYMobileService *mobileService;

/**
 *  query api 服务
 */
@property(nonatomic,strong) ZYQueryService *queryService;

/**
 是否为debug模式
 */
@property(nonatomic,assign) BOOL isDebug;

/**
 *  实例
 *
 *  @return <#return value description#>
 */
+(ZYServiceEngine*)share;


/**
 *  初始化 mobile api 服务
 *
 *  @param baseInfo 基础信息
 *  @param delegate <#delegate description#>
 */
-(void)initializeMobileService:(ZYMobileBaseInfo*)baseInfo delegate:(id)delegate;

/**
 *  初始化 mobile query 服务
 *
 *  @param baseInfo <#baseInfo description#>
 */
-(void)initializeQueryService:(ZYQueryBaseInfo*)baseInfo delegate:(id)delegate;


@end
