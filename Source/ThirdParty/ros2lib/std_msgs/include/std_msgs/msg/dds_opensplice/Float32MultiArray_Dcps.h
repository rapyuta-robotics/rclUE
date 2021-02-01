#ifndef _H_76190CDA9E67F28D4B0FF2179EB8F77F_Float32MultiArray_DCPS_H_
#define _H_76190CDA9E67F28D4B0FF2179EB8F77F_Float32MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Float32MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Float32MultiArray_TypeSupportInterface;

            typedef Float32MultiArray_TypeSupportInterface * Float32MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Float32MultiArray_TypeSupportInterface> Float32MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Float32MultiArray_TypeSupportInterface> Float32MultiArray_TypeSupportInterface_out;


            class Float32MultiArray_DataWriter;

            typedef Float32MultiArray_DataWriter * Float32MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Float32MultiArray_DataWriter> Float32MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Float32MultiArray_DataWriter> Float32MultiArray_DataWriter_out;


            class Float32MultiArray_DataReader;

            typedef Float32MultiArray_DataReader * Float32MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Float32MultiArray_DataReader> Float32MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Float32MultiArray_DataReader> Float32MultiArray_DataReader_out;


            class Float32MultiArray_DataReaderView;

            typedef Float32MultiArray_DataReaderView * Float32MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Float32MultiArray_DataReaderView> Float32MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Float32MultiArray_DataReaderView> Float32MultiArray_DataReaderView_out;

            struct Float32MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Float32MultiArray_, struct Float32MultiArray_Seq_uniq_> Float32MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Float32MultiArray_Seq> Float32MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Float32MultiArray_Seq> Float32MultiArray_Seq_out;

            class  Float32MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Float32MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Float32MultiArray_TypeSupportInterface_var _var_type;

                static Float32MultiArray_TypeSupportInterface_ptr _duplicate (Float32MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Float32MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Float32MultiArray_TypeSupportInterface () {};
                ~Float32MultiArray_TypeSupportInterface () {};
            private:
                Float32MultiArray_TypeSupportInterface (const Float32MultiArray_TypeSupportInterface &);
                Float32MultiArray_TypeSupportInterface & operator = (const Float32MultiArray_TypeSupportInterface &);
            };

            class  Float32MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Float32MultiArray_DataWriter_ptr _ptr_type;
                typedef Float32MultiArray_DataWriter_var _var_type;

                static Float32MultiArray_DataWriter_ptr _duplicate (Float32MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Float32MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Float32MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Float32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Float32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Float32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Float32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Float32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Float32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Float32MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Float32MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Float32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32MultiArray_& instance_data) = 0;

            protected:
                Float32MultiArray_DataWriter () {};
                ~Float32MultiArray_DataWriter () {};
            private:
                Float32MultiArray_DataWriter (const Float32MultiArray_DataWriter &);
                Float32MultiArray_DataWriter & operator = (const Float32MultiArray_DataWriter &);
            };

            class  Float32MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Float32MultiArray_DataReader_ptr _ptr_type;
                typedef Float32MultiArray_DataReader_var _var_type;

                static Float32MultiArray_DataReader_ptr _duplicate (Float32MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32MultiArray_& instance) = 0;

            protected:
                Float32MultiArray_DataReader () {};
                ~Float32MultiArray_DataReader () {};
            private:
                Float32MultiArray_DataReader (const Float32MultiArray_DataReader &);
                Float32MultiArray_DataReader & operator = (const Float32MultiArray_DataReader &);
            };

            class  Float32MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Float32MultiArray_DataReaderView_ptr _ptr_type;
                typedef Float32MultiArray_DataReaderView_var _var_type;

                static Float32MultiArray_DataReaderView_ptr _duplicate (Float32MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float32MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float32MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float32MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32MultiArray_& instance) = 0;

            protected:
                Float32MultiArray_DataReaderView () {};
                ~Float32MultiArray_DataReaderView () {};
            private:
                Float32MultiArray_DataReaderView (const Float32MultiArray_DataReaderView &);
                Float32MultiArray_DataReaderView & operator = (const Float32MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
