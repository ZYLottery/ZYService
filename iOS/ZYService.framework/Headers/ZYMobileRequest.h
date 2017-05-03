//
//  ZYMobileRequest.h
//  ZYServers
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYServicePage.h"
#import "ZYServiceClientInfo.h"

@interface ZYMobileRequest : NSObject

/**
 *  命令请求数据，Base64编码的命令请求数据，如本次命令不需要请求数据，可传null
 */
@property(nonatomic,strong) NSString *data;
/**
 *  分页请求数据，详见：分页请求数据格式
 */
@property(nonatomic,strong) ZYServicePage *page;
/**
 *  是否加密
 *  与各命令的定义相关，默认均不加密，可选值如下：
 *  0：不加密
 *  1：DESede加密（3DES，DESEDE_ECB_PKCS5PADDING）
 *  2：AES加密（AES_CBC_PKCS5PADDING）
 */
@property(nonatomic,assign) int encrypt;

/**
 请求附属信息
 */
@property(nonatomic,strong) NSMutableDictionary *metaData;
/**
 *  客户端信息，JSON对象，详见：客户端信息数据格式
 */
@property(nonatomic,strong) ZYServiceClientInfo *clientInfo;


@end
