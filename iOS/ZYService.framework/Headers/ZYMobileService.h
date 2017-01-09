//
//  ZYMobileServer.h
//  ZYServers
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYMobileResponse.h"
#import "ZYServiceError.h"
#import "ZYServicePage.h"
#import "ZYServiceClientInfo.h"
#import "ZYMobileRequest.h"
#import "ZYServiceUserInfo.h"
#import "ZYMobileBaseInfo.h"

typedef void(^MobileSuccessHandle) (ZYMobileResponse *response);
typedef void(^MobileFailureHandle) (ZYServiceError *error);

typedef enum{
    ZYMobileEncryption_0 = 0,//默认 base64
    ZYMobileEncryption_1 = 1,// des
    ZYMobileEncryption_2 = 2,// aes
    ZYMobileEncryption_3 = 3,// https
} ZYMobileEncryption;


@protocol ZYMobileServiceDelegate<NSObject>
@required

/**
 *  当用户需要登录时没有用户信息的时候调用
 *
 *  @param userInfo 将其中的属性重新赋值
 */
-(void)needReLoginWithError:(ZYServiceError*)error;

/**
 *  需要获取用户信息
 *
 *  @param userInfo <#userInfo description#>
 */
-(ZYServiceUserInfo*)fetchUserInfo;

/**
 *  用户sessionToken发生变化
 *
 *  @param sessionToken <#sessionToken description#>
 */
-(void)userSessionTokenUpdate:(NSString*)sessionToken;


@end

@interface ZYMobileService : NSObject

/**
 *  代理
 */
@property(weak,nonatomic) id<ZYMobileServiceDelegate> delegate;

/**
 *  mobile api 基础信息
 */
@property(nonatomic,strong) ZYMobileBaseInfo *baseInfo;



/**
 *  pod 请求
 *
 *  @param patamerters   参数
 *  @param suffix        url后缀
 *  @param command       <#command description#>
 *  @param encrypt       <#encrypt description#>
 *  @param page          <#page description#>
 *  @param needLogin     <#needLogin description#>
 *  @param successHandle <#successHandle description#>
 *  @param failureHandle <#failureHandle description#>
 */
-(void)postWithPatamerters:(NSMutableDictionary*)patamerters
                    suffix:(NSString*)suffix
                   command:(NSString*)command
                   encrypt:(ZYMobileEncryption)encrypt
                      page:(ZYServicePage*)page
                 needLogin:(BOOL)needLogin
             successHandle:(MobileSuccessHandle)successHandle
             failureHandle:(MobileFailureHandle)failureHandle;


@end
