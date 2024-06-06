// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice
#include "car_sign/msg/detail/motor_tilstand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
car_sign__msg__MotorTilstand__init(car_sign__msg__MotorTilstand * msg)
{
  if (!msg) {
    return false;
  }
  // instruks_id
  // left
  // right
  return true;
}

void
car_sign__msg__MotorTilstand__fini(car_sign__msg__MotorTilstand * msg)
{
  if (!msg) {
    return;
  }
  // instruks_id
  // left
  // right
}

bool
car_sign__msg__MotorTilstand__are_equal(const car_sign__msg__MotorTilstand * lhs, const car_sign__msg__MotorTilstand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // instruks_id
  if (lhs->instruks_id != rhs->instruks_id) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  return true;
}

bool
car_sign__msg__MotorTilstand__copy(
  const car_sign__msg__MotorTilstand * input,
  car_sign__msg__MotorTilstand * output)
{
  if (!input || !output) {
    return false;
  }
  // instruks_id
  output->instruks_id = input->instruks_id;
  // left
  output->left = input->left;
  // right
  output->right = input->right;
  return true;
}

car_sign__msg__MotorTilstand *
car_sign__msg__MotorTilstand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__msg__MotorTilstand * msg = (car_sign__msg__MotorTilstand *)allocator.allocate(sizeof(car_sign__msg__MotorTilstand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_sign__msg__MotorTilstand));
  bool success = car_sign__msg__MotorTilstand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_sign__msg__MotorTilstand__destroy(car_sign__msg__MotorTilstand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_sign__msg__MotorTilstand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_sign__msg__MotorTilstand__Sequence__init(car_sign__msg__MotorTilstand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__msg__MotorTilstand * data = NULL;

  if (size) {
    data = (car_sign__msg__MotorTilstand *)allocator.zero_allocate(size, sizeof(car_sign__msg__MotorTilstand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_sign__msg__MotorTilstand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_sign__msg__MotorTilstand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
car_sign__msg__MotorTilstand__Sequence__fini(car_sign__msg__MotorTilstand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_sign__msg__MotorTilstand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

car_sign__msg__MotorTilstand__Sequence *
car_sign__msg__MotorTilstand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__msg__MotorTilstand__Sequence * array = (car_sign__msg__MotorTilstand__Sequence *)allocator.allocate(sizeof(car_sign__msg__MotorTilstand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_sign__msg__MotorTilstand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_sign__msg__MotorTilstand__Sequence__destroy(car_sign__msg__MotorTilstand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_sign__msg__MotorTilstand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_sign__msg__MotorTilstand__Sequence__are_equal(const car_sign__msg__MotorTilstand__Sequence * lhs, const car_sign__msg__MotorTilstand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_sign__msg__MotorTilstand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_sign__msg__MotorTilstand__Sequence__copy(
  const car_sign__msg__MotorTilstand__Sequence * input,
  car_sign__msg__MotorTilstand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_sign__msg__MotorTilstand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_sign__msg__MotorTilstand * data =
      (car_sign__msg__MotorTilstand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_sign__msg__MotorTilstand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_sign__msg__MotorTilstand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_sign__msg__MotorTilstand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
