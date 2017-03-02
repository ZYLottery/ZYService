//
//  ZYQueryService.h
//  ZYServers
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYQueryBaseInfo.h"
#import "ZYQueryResponse.h"
#import "ZYServiceError.h"
#import "ZYMobileService.h"

typedef void(^QuerySuccessHandle) (ZYQueryResponse *response);
typedef void(^QueryFailureHandle) (ZYServiceError *error);
/**
 重定向协议
 */

@interface ZYQueryService : NSObject

/**
 *  mobile api 基础信息
 */
@property(nonatomic,strong) ZYQueryBaseInfo *baseInfo;

/**
 * 提示弹框 重定向 代理
 */
@property(weak,nonatomic) id<ZYServiceShowAlertAndRedirectDelegate> alertAndRedirectDelegate;
/**
 *  Query API 通用GET请求
 *
 *  @param patamerters  (默认成功或失败都不忽视服务器控制弹窗）
 *  @param suffix          url后缀
 *  @param successHandle <#successBlock description#>
 *  @param failureHandle <#failureBlock description#>
 */
-(void)getWithPatamerters:(id)patamerters
                   suffix:(NSString*)suffix
            successHandle:(QuerySuccessHandle)successHandle
            failureHandle:(QueryFailureHandle)failureHandle;

/**
 *  Query API 通用GET请求
 *
 *  @param patamerters  （默认成功时不忽视服务器控制弹窗）
 *  @param suffix          url后缀
 *  @param ignoreMessageWhenFail      忽视处理message 当失败时
 *  @param successHandle <#successBlock description#>
 *  @param failureHandle <#failureBlock description#>
 */
-(void)getWithPatamerters:(id)patamerters
                   suffix:(NSString*)suffix
            ignoreMessageWhenFail:(BOOL)ignoreMessageDataWhenFail
            successHandle:(QuerySuccessHandle)successHandle
            failureHandle:(QueryFailureHandle)failureHandle;

/**
 *  Query API 通用GET请求
 *
 *  @param patamerters  <#patamerters description#>
 *  @param suffix          url后缀
 *  @param ignoreMessageWhenSuccess   忽视处理message 当成功时
 *  @param ignoreMessageWhenFail      忽视处理message 当失败时
 *  @param successHandle <#successBlock description#>
 *  @param failureHandle <#failureBlock description#>
 */
-(void)getWithPatamerters:(id)patamerters
                   suffix:(NSString*)suffix
 ignoreMessageWhenSuccess:(BOOL)ignoreMessageDataWhenSuccess
    ignoreMessageWhenFail:(BOOL)ignoreMessageDataWhenFail
            successHandle:(QuerySuccessHandle)successHandle
            failureHandle:(QueryFailureHandle)failureHandle;


@end
