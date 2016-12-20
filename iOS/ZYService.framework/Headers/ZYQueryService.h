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


typedef void(^QuerySuccessHandle) (NSURLSessionDataTask *task, ZYQueryResponse *response);
typedef void(^QueryFailureHandle) (NSURLSessionDataTask *task, ZYServiceError *error);
@interface ZYQueryService : NSObject

/**
 *  mobile api 基础信息
 */
@property(nonatomic,strong) ZYQueryBaseInfo *baseInfo;


/**
 *  Query API 通用GET请求
 *
 *  @param patamerters  <#patamerters description#>
 *  @param suffix          url后缀
 *  @param successHandle <#successBlock description#>
 *  @param failureHandle <#failureBlock description#>
 */
-(void)getWithPatamerters:(id)patamerters
                   suffix:(NSString*)suffix
            successHandle:(QuerySuccessHandle)successHandle
            failureHandle:(QueryFailureHandle)failureHandle;


@end
