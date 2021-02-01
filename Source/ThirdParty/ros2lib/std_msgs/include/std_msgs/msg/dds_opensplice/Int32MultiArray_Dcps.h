#ifndef _H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray_DCPS_H_
#define _H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int32MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int32MultiArray_TypeSupportInterface;

            typedef Int32MultiArray_TypeSupportInterface * Int32MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int32MultiArray_TypeSupportInterface> Int32MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int32MultiArray_TypeSupportInterface> Int32MultiArray_TypeSupportInterface_out;


            class Int32MultiArray_DataWriter;

            typedef Int32MultiArray_DataWriter * Int32MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int32MultiArray_DataWriter> Int32MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int32MultiArray_DataWriter> Int32MultiArray_DataWriter_out;


            class Int32MultiArray_DataReader;

            typedef Int32MultiArray_DataReader * Int32MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int32MultiArray_DataReader> Int32MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Int32MultiArray_DataReader> Int32MultiArray_DataReader_out;


            class Int32MultiArray_DataReaderView;

            typedef Int32MultiArray_DataReaderView * Int32MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int32MultiArray_DataReaderView> Int32MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int32MultiArray_DataReaderView> Int32MultiArray_DataReaderView_out;

            struct Int32MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Int32MultiArray_, struct Int32MultiArray_Seq_uniq_> Int32MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Int32MultiArray_Seq> Int32MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Int32MultiArray_Seq> Int32MultiArray_Seq_out;

            class  Int32MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int32MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Int32MultiArray_TypeSupportInterface_var _var_type;

                static Int32MultiArray_TypeSupportInterface_ptr _duplicate (Int32MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int32MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int32MultiArray_TypeSupportInterface () {};
                ~Int32MultiArray_TypeSupportInterface () {};
            private:
                Int32MultiArray_TypeSupportInterface (const Int32MultiArray_TypeSupportInterface &);
                Int32MultiArray_TypeSupportInterface & operator = (const Int32MultiArray_TypeSupportInterface &);
            };

            class  Int32MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int32MultiArray_DataWriter_ptr _ptr_type;
                typedef Int32MultiArray_DataWriter_var _var_type;

                static Int32MultiArray_DataWriter_ptr _duplicate (Int32MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int32MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int32MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32MultiArray_& instance_data) = 0;

            protected:
                Int32MultiArray_DataWriter () {};
                ~Int32MultiArray_DataWriter () {};
            private:
                Int32MultiArray_DataWriter (const Int32MultiArray_DataWriter &);
                Int32MultiArray_DataWriter & operator = (const Int32MultiArray_DataWriter &);
            };

            class  Int32MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int32MultiArray_DataReader_ptr _ptr_type;
                typedef Int32MultiArray_DataReader_var _var_type;

                static Int32MultiArray_DataReader_ptr _duplicate (Int32MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32MultiArray_& instance) = 0;

            protected:
                Int32MultiArray_DataReader () {};
                ~Int32MultiArray_DataReader () {};
            private:
                Int32MultiArray_DataReader (const Int32MultiArray_DataReader &);
                Int32MultiArray_DataReader & operator = (const Int32MultiArray_DataReader &);
            };

            class  Int32MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int32MultiArray_DataReaderView_ptr _ptr_type;
                typedef Int32MultiArray_DataReaderView_var _var_type;

                static Int32MultiArray_DataReaderView_ptr _duplicate (Int32MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32MultiArray_& instance) = 0;

            protected:
                Int32MultiArray_DataReaderView () {};
                ~Int32MultiArray_DataReaderView () {};
            private:
                Int32MultiArray_DataReaderView (const Int32MultiArray_DataReaderView &);
                Int32MultiArray_DataReaderView & operator = (const Int32MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
