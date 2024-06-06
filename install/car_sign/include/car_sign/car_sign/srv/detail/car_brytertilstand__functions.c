// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice
#include "car_sign/srv/detail/car_brytertilstand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
car_sign__srv__CarBrytertilstand_Request__init(car_sign__srv__CarBrytertilstand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bryter_id
  return true;
}

void
car_sign__srv__CarBrytertilstand_Request__fini(car_sign__srv__CarBrytertilstand_Request * msg)
{
  if (!msg) {
    return;
  }
  // bryter_id
}

bool
car_sign__srv__CarBrytertilstand_Request__are_equal(const car_sign__srv__CarBrytertilstand_Request * lhs, const car_sign__srv__CarBrytertilstand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bryter_id
  if (lhs->bryter_id != rhs->bryter_id) {
    return false;
  }
  return true;
}

bool
car_sign__srv__CarBrytertilstand_Request__copy(
  const car_sign__srv__CarBrytertilstand_Request * input,
  car_sign__srv__CarBrytertilstand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // bryter_id
  output->bryter_id = input->bryter_id;
  return true;
}

car_sign__srv__CarBrytertilstand_Request *
car_sign__srv__CarBrytertilstand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Request * msg = (car_sign__srv__CarBrytertilstand_Request *)allocator.allocate(sizeof(car_sign__srv__CarBrytertilstand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_sign__srv__CarBrytertilstand_Request));
  bool success = car_sign__srv__CarBrytertilstand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_sign__srv__CarBrytertilstand_Request__destroy(car_sign__srv__CarBrytertilstand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_sign__srv__CarBrytertilstand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_sign__srv__CarBrytertilstand_Request__Sequence__init(car_sign__srv__CarBrytertilstand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Request * data = NULL;

  if (size) {
    data = (car_sign__srv__CarBrytertilstand_Request *)allocator.zero_allocate(size, sizeof(car_sign__srv__CarBrytertilstand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_sign__srv__CarBrytertilstand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_sign__srv__CarBrytertilstand_Request__fini(&data[i - 1]);
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
car_sign__srv__CarBrytertilstand_Request__Sequence__fini(car_sign__srv__CarBrytertilstand_Request__Sequence * array)
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
      car_sign__srv__CarBrytertilstand_Request__fini(&array->data[i]);
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

car_sign__srv__CarBrytertilstand_Request__Sequence *
car_sign__srv__CarBrytertilstand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Request__Sequence * array = (car_sign__srv__CarBrytertilstand_Request__Sequence *)allocator.allocate(sizeof(car_sign__srv__CarBrytertilstand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_sign__srv__CarBrytertilstand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_sign__srv__CarBrytertilstand_Request__Sequence__destroy(car_sign__srv__CarBrytertilstand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_sign__srv__CarBrytertilstand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_sign__srv__CarBrytertilstand_Request__Sequence__are_equal(const car_sign__srv__CarBrytertilstand_Request__Sequence * lhs, const car_sign__srv__CarBrytertilstand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_sign__srv__CarBrytertilstand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_sign__srv__CarBrytertilstand_Request__Sequence__copy(
  const car_sign__srv__CarBrytertilstand_Request__Sequence * input,
  car_sign__srv__CarBrytertilstand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_sign__srv__CarBrytertilstand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_sign__srv__CarBrytertilstand_Request * data =
      (car_sign__srv__CarBrytertilstand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_sign__srv__CarBrytertilstand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_sign__srv__CarBrytertilstand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_sign__srv__CarBrytertilstand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
car_sign__srv__CarBrytertilstand_Response__init(car_sign__srv__CarBrytertilstand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // bryter_tilstand
  return true;
}

void
car_sign__srv__CarBrytertilstand_Response__fini(car_sign__srv__CarBrytertilstand_Response * msg)
{
  if (!msg) {
    return;
  }
  // bryter_tilstand
}

bool
car_sign__srv__CarBrytertilstand_Response__are_equal(const car_sign__srv__CarBrytertilstand_Response * lhs, const car_sign__srv__CarBrytertilstand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bryter_tilstand
  if (lhs->bryter_tilstand != rhs->bryter_tilstand) {
    return false;
  }
  return true;
}

bool
car_sign__srv__CarBrytertilstand_Response__copy(
  const car_sign__srv__CarBrytertilstand_Response * input,
  car_sign__srv__CarBrytertilstand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // bryter_tilstand
  output->bryter_tilstand = input->bryter_tilstand;
  return true;
}

car_sign__srv__CarBrytertilstand_Response *
car_sign__srv__CarBrytertilstand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Response * msg = (car_sign__srv__CarBrytertilstand_Response *)allocator.allocate(sizeof(car_sign__srv__CarBrytertilstand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_sign__srv__CarBrytertilstand_Response));
  bool success = car_sign__srv__CarBrytertilstand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_sign__srv__CarBrytertilstand_Response__destroy(car_sign__srv__CarBrytertilstand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_sign__srv__CarBrytertilstand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_sign__srv__CarBrytertilstand_Response__Sequence__init(car_sign__srv__CarBrytertilstand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Response * data = NULL;

  if (size) {
    data = (car_sign__srv__CarBrytertilstand_Response *)allocator.zero_allocate(size, sizeof(car_sign__srv__CarBrytertilstand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_sign__srv__CarBrytertilstand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_sign__srv__CarBrytertilstand_Response__fini(&data[i - 1]);
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
car_sign__srv__CarBrytertilstand_Response__Sequence__fini(car_sign__srv__CarBrytertilstand_Response__Sequence * array)
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
      car_sign__srv__CarBrytertilstand_Response__fini(&array->data[i]);
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

car_sign__srv__CarBrytertilstand_Response__Sequence *
car_sign__srv__CarBrytertilstand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_sign__srv__CarBrytertilstand_Response__Sequence * array = (car_sign__srv__CarBrytertilstand_Response__Sequence *)allocator.allocate(sizeof(car_sign__srv__CarBrytertilstand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_sign__srv__CarBrytertilstand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_sign__srv__CarBrytertilstand_Response__Sequence__destroy(car_sign__srv__CarBrytertilstand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_sign__srv__CarBrytertilstand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_sign__srv__CarBrytertilstand_Response__Sequence__are_equal(const car_sign__srv__CarBrytertilstand_Response__Sequence * lhs, const car_sign__srv__CarBrytertilstand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_sign__srv__CarBrytertilstand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_sign__srv__CarBrytertilstand_Response__Sequence__copy(
  const car_sign__srv__CarBrytertilstand_Response__Sequence * input,
  car_sign__srv__CarBrytertilstand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_sign__srv__CarBrytertilstand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_sign__srv__CarBrytertilstand_Response * data =
      (car_sign__srv__CarBrytertilstand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_sign__srv__CarBrytertilstand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_sign__srv__CarBrytertilstand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_sign__srv__CarBrytertilstand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
