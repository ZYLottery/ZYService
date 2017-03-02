//
//  ZYQueryResponse.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYServicePage.h"
#import "ZYMessageDataModel.h"
@interface ZYQueryResponse : NSObject
/**
 *  协议号
 */
@property(nonatomic,assign) NSInteger command;
/**
 *  状态码 	0 成功 其它 失败
 */
@property(nonatomic,assign) NSInteger code;
/**
 *  数据字段
 */
@property(nonatomic,strong) id data;
/**
 *  状态描述
 */
@property(nonatomic,strong) NSString *message;
/**
 *  分页
 */
@property(nonatomic,strong) ZYServicePage *page;
/**
 *  服务器时间
 */
@property(nonatomic,strong) NSString *timestamp;
/**
 *  建议跳转地址	建议返回地址（例如http地址或约定APP内页面路径），供客户端进行自动页面跳转使用
 */
@property(nonatomic,strong) NSString *redirect;
/**
 *  提示信息的级别	返回数值越大则级别越高，具体针对不同级别的行为由客户端自行实现，可提供指导性规范
 *  注意：为了节约消息体的空间，如接口未特殊指定时不返回此字段
 */
@property(nonatomic,strong) NSString *messageLevel;

/**
 提示信息窗口数据
 */
@property(nonatomic,strong) ZYMessageDataModel * messageData;
@end
