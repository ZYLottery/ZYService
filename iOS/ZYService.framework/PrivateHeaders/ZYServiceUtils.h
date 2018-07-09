//
//  ZYServiceUtils.h
//  ZYService
//
//  Created by 何伟东 on 2018/7/9.
//  Copyright © 2018年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

@interface ZYServiceUtils : NSObject

/**
 设置userAgent
 
 @param sessionManager <#sessionManager description#>
 */
+(void)registerUserAgent:(AFHTTPSessionManager*)sessionManager;

@end
