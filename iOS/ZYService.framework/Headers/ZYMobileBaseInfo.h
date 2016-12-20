//
//  ZYMobileBaseInfo.h
//  ZYService
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYMobileBaseInfo : NSObject

/**
 *  服务器URL
 */
@property(nonatomic,strong) NSString *serviceUrl;
/**
 *  用于下载跟踪
 */
@property(nonatomic,strong) NSString *cookieData;
/**
 *  app对应的clientId
 */
@property(nonatomic,strong) NSString *clientId;
/**
 *  app对应的secret
 */
@property(nonatomic,strong) NSString *secret;
/**
 *  app对应的appid
 */
@property(nonatomic,strong) NSString *appid;

/**
 *  产品id
 */
@property(nonatomic,strong) NSString *productId;

/**
 *  渠道号
 */
@property(nonatomic,strong) NSString *channelId;

/**
 *  公钥
 *  用于章鱼彩票调试，第三方使用可以不传值，默认为release的publicKey
 */
@property(nonatomic,strong) NSString *publicKey;

/**
 alloc一个实例
 
 @return <#return value description#>
 */
+(ZYMobileBaseInfo*)baseInfo;


@end
