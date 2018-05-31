//
//  NSObject+WBTAssociatedObject.h
//  e-mail:83118274@qq.com
//
//  Created by lishiping on 17/4/25.
//  Copyright © 2017年 lishiping. All rights reserved.
//
//If you feel this open source library is of great help to you, please open the URL to the point of a great, great encouragement your recognition to the author, the author will release better open source library for you again
//如果您感觉本开源库对您很有帮助，请打开URL给作者点个赞，您的认可给作者极大的鼓励，作者还会再发布更好的开源库给大家

//github address//https://github.com/lishiping/SPWebView
//github address//https://github.com/lishiping/SPDebugBar
//github address//https://github.com/lishiping/SPFastPush
//github address//https://github.com/lishiping/SPMacro
//github address//https://github.com/lishiping/SafeData
//github address//https://github.com/lishiping/SPCategory
//github address//https://github.com/lishiping/SPBaseClass


#import <Foundation/Foundation.h>
#import <objc/runtime.h>

/*!
 *  添加 NSObject 设置，获取关联对象的工具方法。
 */
@interface NSObject (SPAssociatedObject)
/*!
 *  取得当前对象对应key的关联对象
 *
 *  @param key 关联对象key
 *
 *  @return 对应key的关联对象
 */
- (id)sp_objectWithAssociatedKey:(void *)key;

/*!
 *  设置关联对象给对应key
 *
 *  @param object 关联对象
 *  @param key    关联对象对应key
 *  @param retain 是否要retain该对象
 */
- (void)sp_setObject:(id)object forAssociatedKey:(void *)key retained:(BOOL)retain;

/*!
 *  设置关联对象给对应key
 *
 *  @param object 关联对象
 *  @param key    关联对象对应key
 *  @param policy AssociationPolicy
 */
- (void)sp_setObject:(id)object forAssociatedKey:(void *)key associationPolicy:(objc_AssociationPolicy)policy;

@end
