//
//  ZYServiceError.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYMessageDataModel.h"
@interface ZYServiceError : NSObject


/**
 *  请求的URL
 */
@property(nonatomic,assign) NSString *url;
/**
 *  http错误码
 */
@property(nonatomic,assign) NSInteger httpCode;
/**
 *  api错误码
 */
@property(nonatomic,assign) NSInteger apiCode;
/**
 *  api错误信息
 */
@property(nonatomic,strong) NSString *message;
/**
 *  错误信息总对象
 */
@property(nonatomic,strong) NSError *error;

/**
 *  提示信息的级别	返回数值越大则级别越高，具体针对不同级别的行为由客户端自行实现，可提供指导性规范
 *  注意：为了节约消息体的空间，如接口未特殊指定时不返回此字段
 */

@property(nonatomic,strong) NSString * messageLevel;

/**
 提示信息窗口数据
 */
@property(nonatomic,strong) ZYMessageDataModel * messageData;

/**
 *  建议跳转地址	建议返回地址（例如http地址或约定APP内页面路径），供客户端进行自动页面跳转使用
 */
@property(nonatomic,strong) NSString *redirect;


@end
