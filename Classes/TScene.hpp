/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef _T_SCENE_HPP_
#define _T_SCENE_HPP_

#include "cocos2d.h"
#include "spine/spine-cocos2dx.h"
#include "TStateMachine.hpp"

using namespace cocos2d;

//! Класс основной сцены приложения
class TScene : public cocos2d::Scene
{
   public:

   //!Статическая функция создания сцены
   //! return -> указатель на объект сцены
   static cocos2d::Scene* createScene();

   //!Функция инициализации сцены
   virtual bool init() override final;

   //!Функция отслеживания нажатых клавиш 
   //! event указатель на ивент
   void onMousePressed( cocos2d::Event* event );

   //!Функция отслеживания нажатых клавиш 
   //! ref указатель на базовый класс Event
   void onAttackButtonPressed( Ref* pSender );

   //!Функция отслеживания нажатых клавиш 
   //! ref указатель на базовый класс Event
   void onStopButtonPressed( Ref* pSender );

   TStateContext context;                        // Объект класса стейт машины

   private:

   //!Функции инициализации всех объектов сцены
   void initMouseListener();
   void initPlayerObj();
   void initMenu();

   // a selector callback
   void menuCloseCallback( cocos2d::Ref* pSender );

   // implement the "static create()" method manually
   CREATE_FUNC( TScene );
};

#endif // !_T_SCENE_HPP_
